#pragma once

#include <libconverter/converter.h>

#define MAX_STRING_LENGTH 50

char* getfield(char* line, int position);
int file_reader(
        DefineUnits* units,
        const char* in_file_name,
        const char* out_file_name);