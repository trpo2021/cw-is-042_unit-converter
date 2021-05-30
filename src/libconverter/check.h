#pragma once

#include <libconverter/converter.h>
#include <libconverter/listnode.h>

#include <stdbool.h>

bool is_appropriate(ListNode* head, DefineUnits* units);
bool is_positive(double value);