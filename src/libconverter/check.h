#pragma once

#include <libconverter/converter.h>
#include <libconverter/listnode.h>

#include <stdbool.h>

bool is_appropriate(ListNode* head, DefineUnits* units);
bool is_positive(double value);
bool is_alpha(char* string);
bool is_digit(char* string);