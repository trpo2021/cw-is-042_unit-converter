#include <libconverter/converter.h>
#include <libconverter/output.h>
// #include <libconverter/units.h>

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

static char* get_file_content(char** array, int position, FILE* stream)
{
    int column;
    int row = 0;
    char line[MAX_STRING_LENGTH];
    printf("POSITION IS %d\n", position);
    while (fgets(line, MAX_STRING_LENGTH, stream)) {
        array[row] = malloc(MAX_STRING_LENGTH * sizeof(char));
        column = 0;
        row++;
        if (row == 1) {
            continue;
        }
        char* value = strtok(line, ";");
        while (value) {
            if (column == position - 1) {
                printf("a\n");
                strcpy(array[row - 2], value);
            }
            value = strtok(NULL, ";");
            column++;
        }
    }
    fclose(stream);
    return *array;
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

BSTree* add_strings_to_tree(int position, FILE* stream)
{
    BSTree* tree;
    char* array[UNITS_NUM];
    *array = get_file_content(array, position, stream);
    if (array == NULL) {
        return NULL;
    }
    tree = bstree_create(0, array[0]);
    BSTree* node;
    for (int i = 1; i < UNITS_NUM; ++i) {
        bstree_add(tree, i, array[i]);
        node = bstree_lookup(tree, i);
        printf("%s\n", node->value);
    }
    free(*array);
    return tree;
}

int convert_units(DefineUnits* units)
{
    BSTree* category;
    BSTree* unit;
    FILE* units_data = fopen(units_data_file_path, "r");
    if (units_data == NULL) {
        return -2;
    }
    category = add_strings_to_tree(CATEGORY_POS, units_data);
    unit = add_strings_to_tree(UNIT_POS + 1, units_data);
    if (category == NULL || unit == NULL) {
        return -1;
    }
    if (is_appropriate(category, unit, units->category, units->have_unit) == false || is_appropriate(category, unit, units->category, units->want_unit) == false) {
        return -1;
    }
    printf("WOW!\n");
    fclose(units_data);
    return 0;
}

bool is_appropriate(BSTree* cat_tree, BSTree* unit_tree, char* cat, char* unit)
{
    BSTree* cat_node;
    BSTree* unit_node;
    printf("%s %s\n", cat, unit);
    for (int i = 0; i < UNITS_NUM; ++i) {
        cat_node = bstree_lookup(cat_tree, i);
        unit_node = bstree_lookup(unit_tree, i);
        if (strcmp(to_lower_string(cat), cat_node->value) == 0 && strcmp(to_lower_string(unit), unit_node->value) == 0) {
            return true;
        }
    }
    return false;
}