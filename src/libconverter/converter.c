#include <libconverter/converter.h>
#include <libconverter/output.h>
#include <libconverter/units.h>

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static struct bstree* bstree_create(int key, char* value)
{
    struct bstree* node;

    node = malloc(sizeof(*node));
    if (node != NULL) {
        node->key = key;
        node->value = value;
        node->left = NULL;
        node->right = NULL;
    }
    return node;
}

static void bstree_add(struct bstree* tree, int key, char* value)
{
    if (tree == NULL) {
        return;
    }
    struct bstree* parent;
    struct bstree* node;
    while (tree != NULL) {
        parent = tree;
        if (key < tree->key) {
            tree = tree->left;
        } else if (key > tree->key) {
            tree = tree->right;
        } else {
            return;
        }
    }
    node = bstree_create(key, value);
    if (key < parent->key) {
        parent->left = node;
    } else {
        parent->right = node;
    }
}

struct bstree* bstree_lookup(struct bstree* tree, int key)
{
    while (tree != NULL) {
        if (key == tree->key) {
            return tree;
        } else if (key < tree->key) {
            tree = tree->left;
        } else {
            tree = tree->right;
        }
    }
    return tree;
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

static void get_file_content(char** array, int size, FILE* units_name)
{
    for (int i = 0; i < size; ++i) {
        array[i] = malloc(20);
        if (array[i] == NULL) {
            memory_error();
            exit(EXIT_FAILURE);
        }
        fgets(array[i], size, units_name);
    }
}

struct bstree* add_strings_to_tree(const char* data_file_path, int num_of_units)
{
    struct bstree* tree;
    FILE* list = fopen(data_file_path, "r");
    if (list == NULL) {
        file_error(data_file_path);
        return NULL;
    }
    char* array[num_of_units];
    get_file_content(array, num_of_units, list);
    tree = bstree_create(0, array[0]);
    for (int i = 1; i < num_of_units; ++i) {
        bstree_add(tree, i, array[i]);
    }
    fclose(list);
    return tree;
}

DefineUnits* convert_units(DefineUnits* units)
{
    struct bstree* tree;
    int unit_num = -1;
    char* category = to_lower_string(units->category);
    char* unit_file_path = malloc(2 * MAX_STRING_LENGTH * sizeof(char));
    if (unit_file_path == NULL) {
        memory_error();
        return units;
    }
    char* factor_file_path = malloc(2 * MAX_STRING_LENGTH * sizeof(char));
    if (factor_file_path == NULL) {
        memory_error();
        return units;
    }

    if (strcmp(category, "length\n") == 0) {
        unit_file_path = "../src/libconverter/units/list_of_length_units.txt";
        factor_file_path
                = "../src/libconverter/units/"
                  "conversion_coefficient_of_length.txt";
        unit_num = NUMBER_OF_LENGTH_UNITS;
    } else if (strcmp(category, "time\n") == 0) {
        unit_file_path = "../src/libconverter/units/list_of_time_units.txt";
        factor_file_path
                = "../src/libconverter/units/"
                  "conversion_coefficient_of_time.txt";
        unit_num = NUMBER_OF_TIME_UNITS;
    } else if (strcmp(category, "rate\n") == 0) {
        unit_file_path = "../src/libconverter/units/list_of_rate_units.txt";
        factor_file_path
                = "../src/libconverter/units/"
                  "conversion_coefficient_of_rate.txt";
        unit_num = NUMBER_OF_RATE_UNITS;
    } else if (strcmp(category, "data size\n") == 0) {
        unit_file_path
                = "../src/libconverter/units/list_of_data_size_units.txt";
        factor_file_path
                = "../src/libconverter/units/"
                  "conversion_coefficient_of_data_size.txt";
        unit_num = NUMBER_OF_DATA_SIZE_UNITS;
    } else if (strcmp(category, "data-rate\n") == 0) {
        unit_file_path
                = "../src/libconverter/units/list_of_data_rate_units.txt";
        factor_file_path
                = "../src/libconverter/units/"
                  "conversion_coefficient_of_data_rate.txt";
        unit_num = NUMBER_OF_DATA_RATE_UNITS;
    }

    if (unit_num == -1) {
        return units;
    }
    tree = add_strings_to_tree(unit_file_path, unit_num);
    if (is_appropriate(tree, units->have_unit, unit_num)
        != is_appropriate(tree, units->want_unit, unit_num)) {
        helper_message("category");
        return units;
    }
    units = from_one_unit(units, tree, unit_num, factor_file_path);

    return units;
}

bool is_appropriate(struct bstree* tree, char* unit, int num_of_units)
{
    struct bstree* node;
    for (int i = 0; i < num_of_units; ++i) {
        node = bstree_lookup(tree, i);
        if (strcmp(unit, node->value) == 0) {
            return true;
        }
    }
    return false;
}