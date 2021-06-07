#pragma once

#include <libconverter/converter.h>

typedef enum {
    ErrorTypeSyntax = -1,
    ErrorTypeArgument = -2,
    ErrorTypeLargeValue = -3
} ErrorType;

void output_data(DefineUnits* units);
void output_factor(DefineUnits* units);
void call_help(char* help);
void output_syntax(char* category);
void output_error(int n);