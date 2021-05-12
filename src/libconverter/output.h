#pragma once

#include <libconverter/input.h>

void output_data(DefineUnits* units);
void call_help(char* help);
void memory_error(void);
void file_error(const char* file_path);
void helper_message(char* difficulty);