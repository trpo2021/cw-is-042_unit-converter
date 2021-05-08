#include <libconverter/converter.h>
#include <libconverter/input.h>
#include <libconverter/output.h>

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void command_requester(DefineUnits* units)
{
    char* command = malloc(MAX_STRING_LENGTH * sizeof(char));
    fgets(command, MAX_STRING_LENGTH, stdin);
    if (strcmp(command, "start\n") == 0) {
        input_data(units);
        output_data(units);
        what_next();
    } else if (strcmp(command, "help\n") == 0) {
        call_help(command);
    } else if (strcmp(command, "syntax\n") == 0) {
        call_help(command);
    } else if (strcmp(command, "finish\n") == 0) {
        return;
    } else {
        printf("Oh, I see you don't know any command. Write \'help\' to learn more about commands: ");
    }
    command_requester(units);
}

static char* set_unit_parameter(char* parameter)
{
    parameter = malloc(MAX_STRING_LENGTH * sizeof(char));
    if (parameter == NULL) {
        return NULL;
    }
    parameter = fgets(parameter, MAX_STRING_LENGTH, stdin);

    return parameter;
}

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

void input_data(DefineUnits* units)
{
    printf("Unit category: ");
    units->category = set_unit_parameter(units->category);
    printf("You have: ");
    scanf("%lf", &units->have_value);
    units->have_unit = set_unit_parameter(units->have_unit);
    remove_space(units->have_unit);
    printf("You want: ");
    units->want_unit = set_unit_parameter(units->want_unit);
    units = convert_units(units);
}

static char* getfield(char* line, int num) {
    char* tok;
    for (tok = strtok(line, ";"); tok && *tok; tok = strtok(NULL, ";\n")) {
        if (!--num) {
            return tok;
        }
    }
    return NULL;
}

int file_reader(DefineUnits* units, const char* in_file_name, const char* out_file_name)
{
    FILE* in_file = fopen(in_file_name, "rt");
    if (in_file == NULL) {
        file_error(in_file);
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
        units->category = getfield(tmp, 1);
        char* val = getfield(tmp, 2);
        units->have_value = atof(val);
        units->have_unit = getfield(tmp, 3);
        units->want_unit = getfield(tmp, 4);
    }

    return 0;
}