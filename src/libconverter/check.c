#include <libconverter/check.h>

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

static char* to_lower_string(char* string)
{
    for (int i = 0; string[i]; ++i) {
        string[i] = tolower(string[i]);
    }
    return string;
}

bool is_appropriate(ListNode* head, DefineUnits* units)
{
    ListNode* first_node;
    ListNode* second_node;
    first_node = list_lookup(
            head,
            to_lower_string(units->category),
            to_lower_string(units->have_unit));
    second_node = list_lookup(
            head,
            to_lower_string(units->category),
            to_lower_string(units->want_unit));
    if ((first_node != NULL) && (second_node != NULL)) {
        return true;
    }
    return false;
}

bool is_positive(double value)
{
    if (value < 0) {
        return false;
    }
    return true;
}

bool is_alpha(char* string)
{
    int tmp = strlen(string);
    if (tmp == 0) {
        return false;
    }
    int i = 0;
    int count = 0;
    for (; string[i]; ++i) {
        if ((isalpha(string[i]) != 0) || (string[i] == '-')) {
            ++count;
        }
    }
    if (i == count) {
        return true;
    }
    return false;
}

bool is_digit(char* string)
{
    int tmp = strlen(string);
    if (tmp == 0) {
        return false;
    }
    int i = 0;
    int count = 0;
    int point_count = 0;
    int plus_count = 0;
    for (; string[i]; ++i) {
        if (isdigit(string[i]) != 0) {
            ++count;
        } else if (string[i] == '.') {
            ++point_count;
        } else if (string[i] == '+') {
            ++plus_count;
        }
    }
    if ((i == count + point_count + plus_count) && (point_count <= 1) && (plus_count <= 1) && (count != 0)) {
        return true;
    }
    return false;
}

int check_number_length(char* number)
{
    double num = atof(number);
    if (num >= 100000000000000000000.) {
        return -1;
    }
    return 0;
}