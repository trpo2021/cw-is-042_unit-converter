#include <libconverter/converter.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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

static struct bstree* bstree_lookup(struct bstree* tree, int key)
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
    for(int i = 0; tmp[i]; ++i) {
        tmp[i] = tolower(tmp[i]);
    }

    return tmp;
}

static void get_name_of_units(char** array, int size, FILE* units_name)
{
    for (int i = 0; i < size; ++i) {
        array[i] = malloc(20);
        if (array[i] == NULL) {
            printf("Failed to allocate memory\n");
            exit(EXIT_FAILURE);
        }
        fscanf(units_name, "%s", array[i]);
    }
}

static struct bstree* add_units_to_list(const char* list_file_path, int num_of_units)
{
    struct bstree* tree;
    FILE* list = fopen(list_file_path, "r");
    if (list == NULL) {
        printf("Failed to open file located at %s\n", list_file_path);
        return NULL;
    }
    char* array[num_of_units];
    get_name_of_units(array, num_of_units, list);
    tree = bstree_create(0, array[0]);
    for (int i = 1; i < num_of_units; ++i) {
        bstree_add(tree, i, array[i]);
    }
    return tree;
}

DefineUnits* convert_units(DefineUnits* units)
{
    struct bstree* tree;
    struct bstree* node;
    char* category = to_lower_string(units->category);
    if (strcmp(category, "length\n") == 0) {
        const char* list_file_path = "../src/libconverter/units/list_of_length_units.txt";
        tree = add_units_to_list(list_file_path, NUMBER_OF_LENGTH_UNITS);
        // node = bstree_lookup(tree, 2);
        // printf("%s\n", node->value);
        // from_length_unit(have_value, have_unit, want_unit);
    } else if (strcmp(category, "time\n") == 0) {
        // from_time_unit(have_value, have_unit, want_unit);
    } else if (strcmp(category, "rate\n") == 0) {
        // from_rate_unit(have_value, have_unit, want_unit);
    } else if (strcmp(category, "data size\n") == 0) {
        // from_data_size_unit(have_value, have_unit, want_unit);
    } else if (strcmp(category, "data-rate\n") == 0) {
        // from_data_rate_unit(have_value, have_unit, want_unit);
    }
    return units;
}