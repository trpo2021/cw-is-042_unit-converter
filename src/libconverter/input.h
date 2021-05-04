#pragma once

#define MAXSIZE 50

typedef struct {
    double have_value;    // Числовое значение имеющейся единицы
    char category[MAXSIZE];    // Категория единиц измерения
    char have_unit[MAXSIZE];    // Имеющаяся единица
    char want_unit[MAXSIZE];    // Единица, в которую хотим перевести значение
} DefineUnits;

void command_requester(DefineUnits units);
void input_data(DefineUnits units);
int file_reader(DefineUnits units, const char* in_file_name, const char* out_file_name);