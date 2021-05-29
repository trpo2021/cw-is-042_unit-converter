#include <libconverter/converter.h>
#include <libconverter/output.h>

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

const char* units_data_file_path = "units/units.csv";

static char* to_lower_string(char* string)
{
    size_t len = strlen(string);
    char* tmp = malloc(len * sizeof(char));
    tmp = strcpy(tmp, string);
    for (int i = 0; tmp[i]; ++i) {
        tmp[i] = tolower(tmp[i]);
    }

    return tmp;
}

static double get_factor(ListNode* list, DefineUnits* units)
{
    ListNode* first_node;
    ListNode* second_node;
    double factor;

    first_node = list_lookup(list, units->category, units->have_unit);
    second_node = list_lookup(list, units->category, units->want_unit);
    if (first_node == NULL || second_node == NULL) {
        return -1;
    }
    factor = first_node->factor / second_node->factor;

    freelist(first_node);
    freelist(second_node);

    return factor;
}

static ListNode* data_file_parser()
{
    FILE* data_file = fopen(units_data_file_path, "rt");
    if (data_file == NULL) {
        perror("fopen");
        return NULL;
    }
    int column;
    int row = 0;
    char line[MAX_STRING_LENGTH];

    Parser parser[UNITS_NUM];
    ListNode* head;

    while (fgets(line, MAX_STRING_LENGTH, data_file)) {
        column = 0;
        row++;
        if (row == 1) {
            continue;
        }
        char* value = strtok(line, ";");
        while (value) {
            if (column == 0) {
                strcpy(parser[row - 2].category, value);
            }
            if (column == 1) {
                strcpy(parser[row - 2].unit, value);
            }
            if (column == 2) {
                parser[row - 2].factor = atof(value);
            }
            value = strtok(NULL, ";");
            column++;
        }
        if (row == 2) {
            head = list_addfront(
                    NULL,
                    0,
                    parser[0].category,
                    parser[0].unit,
                    parser[0].factor);
        } else {
            head = list_addfront(
                    head,
                    row - 2,
                    parser[row - 2].category,
                    parser[row - 2].unit,
                    parser[row - 2].factor);
        }
    }
    fclose(data_file);
    return head;
}

DefineUnits* init_units_struct(DefineUnits* units, int argc, char* argv[])
{
    units->category = argv[1];
    if (argc == 5) {
        units->have_value = atof(argv[2]);
        units->have_unit = argv[3];
        units->want_unit = argv[4];
    } else {
        units->have_value = 1;
        units->have_unit = argv[2];
        units->want_unit = argv[3];
    }
    return units;
}

int convert_units(DefineUnits* units)
{
    ListNode* list;
    list = data_file_parser();
    if (list == NULL) {
        return -2;
    }
    if (is_appropriate(list, units) == 0) {
        free(list);
        return -1;
    }
    double factor = get_factor(list, units);
    units->want_value = units->have_value * factor;
    printf("%lf & %lf\n", factor, units->want_value);
    free(list);
    return 0;
}

bool is_appropriate(ListNode* head, DefineUnits* units)
{
    ListNode* first_node;
    ListNode* second_node;
    first_node = list_lookup(
            head,
            to_lower_string(units->category),
            to_lower_string(units->have_unit));
    second_node = list_lookup(
            head,
            to_lower_string(units->category),
            to_lower_string(units->want_unit));
    if ((first_node != NULL) && (second_node != NULL)) {
        return true;
    }
    return false;
}