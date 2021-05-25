#pragma once

#include <libconverter/converter.h>

char* getfield(char* line, int position);
int file_reader(
        DefineUnits* units,
        const char* in_file_name,
        const char* out_file_name);