#pragma once

#include <libconverter/bstree.h>
#include <stdbool.h>
#include <stdio.h>

#define UNITS_NUM 53

#define CATEGORY_POS 1
#define UNIT_POS 2
#define FACTOR_POS 3

typedef struct {
    double have_value; // Числовое значение имеющейся единицы
    double want_value; // Числовое значение переведенной единицы
    char* category;  // Категория единиц измерения
    char* have_unit; // Имеющаяся единица
    char* want_unit; // Единица, в которую хотим перевести значение
} DefineUnits;

DefineUnits* init_units_struct(DefineUnits* units, int argc, char* argv[]);
int convert_units(DefineUnits* units);
bool is_appropriate(BSTree* cat_tree, BSTree* unit_tree, char* cat, char* unit);
BSTree* add_strings_to_tree(int position, FILE* stream);