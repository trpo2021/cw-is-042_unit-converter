#pragma once

#include <libconverter/bstree.h>
#include <stdbool.h>
#include <stdio.h>

#define NUMBER_OF_LENGTH_UNITS 12
#define NUMBER_OF_TIME_UNITS 13
#define NUMBER_OF_RATE_UNITS 6
#define NUMBER_OF_DATA_SIZE_UNITS 13
#define NUMBER_OF_DATA_RATE_UNITS 14

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

char* getfield(char* line, int position);
int convert_units(DefineUnits* units);
bool is_appropriate(BSTree* cat_tree, BSTree* unit_tree, char* cat, char* unit, FILE* stream);
BSTree* add_strings_to_tree(int position, FILE* stream);