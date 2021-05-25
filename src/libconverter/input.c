#include <libconverter/input.h>
#include <libconverter/output.h>

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void remove_space(char* string)
{
    int end = 0;
    int len = strlen(string);
    for (int i = 0; i < len; ++i) {
        if (string[i] != ' ') {
            if (i != end) {
                string[end] = string[i];
            }
            end++;
        }
    }
    string[end] = '\0';
}

static char* get_field(char* line, int position)
{
    char* tok;
    for (tok = strtok(line, ";"); tok && *tok; tok = strtok(NULL, ";\n")) {
        if (!--position) {
            return tok;
        }
    }
    return NULL;
}

int file_reader(
        DefineUnits* units, const char* in_file_name, const char* out_file_name)
{
    FILE* in_file = fopen(in_file_name, "rt");
    if (in_file == NULL) {
        file_error(in_file_name);
        return -1;
    }

    FILE* out_file = fopen(out_file_name, "w");
    if (out_file == NULL) {
        file_error(out_file_name);
        return -1;
    }

    char line[MAX_STRING_LENGTH];
    while (fgets(line, MAX_STRING_LENGTH, in_file)) {
        char* tmp = strdup(line);
        units->category = get_field(tmp, 1);
        char* val = get_field(tmp, 2);
        units->have_value = atof(val);
        units->have_unit = get_field(tmp, 3);
        units->want_unit = get_field(tmp, 4);
    }
    remove_space(units->category);

    return 0;
}