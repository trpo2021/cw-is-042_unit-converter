#pragma once

#include <libconverter/input.h>
#include <stdbool.h>

#define NUMBER_OF_LENGTH_UNITS 11
#define NUMBER_OF_TIME_UNITS 12
#define NUMBER_OF_RATE_UNITS 0
#define NUMBER_OF_DATA_SIZE_UNITS 12
#define NUMBER_OF_DATA_RATE_UNITS 0

struct bstree {
    int key;
    char* value;

    struct bstree* left;
    struct bstree* right;
};


DefineUnits* convert_units(DefineUnits* units);
bool is_category_compliance(struct bstree* tree, char* unit, int num_of_units);
struct bstree* add_units_to_list(const char* list_file_path, int num_of_units);
struct bstree* bstree_lookup(struct bstree* tree, int key);