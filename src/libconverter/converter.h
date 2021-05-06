#pragma once

#include <libconverter/input.h>
#include <stdbool.h>

#define NUMBER_OF_LENGTH_UNITS 11

struct bstree {
    int key;
    char* value;

    struct bstree* left;
    struct bstree* right;
};


DefineUnits* convert_units(DefineUnits* units);
// bool are_category_compliance(char* category, char* first_unit, char* second_unit);