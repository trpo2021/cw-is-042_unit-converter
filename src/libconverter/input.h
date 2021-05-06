#pragma once

#define MAXSIZE 50

typedef struct {
    double have_value;    // Числовое значение имеющейся единицы
    double want_value;    // Числовое значение переведенной единицы
    char* category;    // Категория единиц измерения
    char* have_unit;    // Имеющаяся единица
    char* want_unit;    // Единица, в которую хотим перевести значение
} DefineUnits;

void command_requester(DefineUnits* units);
void input_data(DefineUnits* units);
int file_reader(DefineUnits* units, const char* in_file_name, const char* out_file_name);