#include <libconverter/converter.h>
#include <libconverter/output.h>
// #include <libconverter/units.h>

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

const char* units_data_file_path = "units/units.csv";

static int get_num_of_units(FILE* stream) {
    char tmp[MAX_STRING_LENGTH];
    int num = 0;
    while (fgets(tmp, MAX_STRING_LENGTH, stream)) {
        num++;
    }
    return num;
}

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

static void get_file_content(char** array, int position, FILE* stream)
{
    char line[MAX_STRING_LENGTH];
    for (int i = 0; fgets(line, MAX_STRING_LENGTH, stream); ++i)
    {
        char* tmp = strdup(line);
        array[i] = getfield(tmp, position);
        free(tmp);
    }
}



char* getfield(char* line, int position)
{
    char* tok;
    for (tok = strtok(line, ";"); tok && *tok; tok = strtok(NULL, ";\n")) {
        if (!--position) {
            return tok;
        }
    }
    return NULL;
}

BSTree* add_strings_to_tree(int position, FILE* stream)
{
    BSTree* tree;
    int num = get_num_of_units(stream);
    char* array[num];
    get_file_content(array, position, stream);
    tree = bstree_create(0, array[0]);
    for (int i = 1; i < num; ++i) {
        bstree_add(tree, i, array[i]);
    }
    return tree;
}

int convert_units(DefineUnits* units)
{
    BSTree* category;
    BSTree* unit;
    FILE* units_data = fopen(units_data_file_path, "r");
    if (units_data == NULL) {
        file_error(units_data_file_path);
        return -1;
    }
    category = add_strings_to_tree(CATEGORY_POS, units_data);
    unit = add_strings_to_tree(UNIT_POS, units_data);
    if (is_appropriate(category, unit, units->category, units->have_unit, units_data) != is_appropriate(category, unit, units->category, units->want_unit, units_data)) {
        helper_message("category");
        return -1;
    }
    printf("WOW!\n");
    fclose(units_data);
    return 0;
}

bool is_appropriate(BSTree* cat_tree, BSTree* unit_tree, char* cat, char* unit, FILE* stream)
{
    BSTree* cat_node;
    BSTree* unit_node;
    int num = get_num_of_units(stream);
    for (int i = 0; i < num; ++i) {
        cat_node = bstree_lookup(cat_tree, i);
        unit_node = bstree_lookup(unit_tree, i);
        if (strcmp(to_lower_string(cat), cat_node->value) == 0 && strcmp(to_lower_string(unit), unit_node->value) == 0) {
            return true;
        }
    }
    return false;
}