#pragma once

#include <libconverter/input.h>
#include <stdbool.h>

#define NUMBER_OF_LENGTH_UNITS 12
#define NUMBER_OF_TIME_UNITS 13
#define NUMBER_OF_RATE_UNITS 6
#define NUMBER_OF_DATA_SIZE_UNITS 13
#define NUMBER_OF_DATA_RATE_UNITS 14

typedef struct BSTree {
    int key;
    char* value;

    struct BSTree* left;
    struct BSTree* right;
} BSTree;

DefineUnits* convert_units(DefineUnits* units);
bool is_appropriate(BSTree* tree, char* unit, int num_of_units);
BSTree* add_strings_to_tree(const char* data_file_path, int num_of_units);
BSTree* bstree_lookup(BSTree* tree, int key);