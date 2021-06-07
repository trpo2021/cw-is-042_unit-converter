#pragma once

#include <libconverter/listnode.h>

#define MAX_STRING_LENGTH 128

typedef struct {
    char category[MAX_STRING_LENGTH];
    char unit[MAX_STRING_LENGTH];
    double factor;
} Parser;

typedef struct {
    double have_value; // Числовое значение имеющейся единицы
    double want_value; // Числовое значение переведенной единицы
    double factor;  // Коэффициент конвертирования единиц измерения
    char* category;  // Категория единиц измерения
    char* have_unit; // Имеющаяся единица
    char* want_unit; // Единица, в которую хотим перевести значение
} DefineUnits;

ListNode* data_file_parser();
DefineUnits* init_units_struct(DefineUnits* units, int argc, char* argv[]);
int convert_units(DefineUnits* units);