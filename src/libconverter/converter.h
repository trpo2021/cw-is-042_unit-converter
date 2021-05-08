#pragma once

#include <libconverter/input.h>
#include <stdbool.h>

#define NUMBER_OF_LENGTH_UNITS 12
#define NUMBER_OF_TIME_UNITS 13
#define NUMBER_OF_RATE_UNITS 6
#define NUMBER_OF_DATA_SIZE_UNITS 13
#define NUMBER_OF_DATA_RATE_UNITS 14

struct bstree {
    int key;
    char* value;

    struct bstree* left;
    struct bstree* right;
};


DefineUnits* convert_units(DefineUnits* units);
bool is_appropriate(struct bstree* tree, char* unit, int num_of_units);
struct bstree*
add_strings_to_tree(const char* data_file_path, int num_of_units);
struct bstree* bstree_lookup(struct bstree* tree, int key);