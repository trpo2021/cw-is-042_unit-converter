#pragma once

#include <libconverter/input.h>

typedef enum {
    ErrorTypeSyntax = -1,
    ErrorTypeMemory = -2,
    ErrorTypeArgument = -3
} ErrorType;

void output_data(DefineUnits* units);
void call_help(char* help);
void memory_error(void);
void file_error(const char* file_path);
void helper_message(char* difficulty);
void output_error(int n);