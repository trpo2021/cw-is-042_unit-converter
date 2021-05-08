#include <libconverter/converter.h>
#include <libconverter/input.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* HELP_CALL = "Usage:\n\t./converter.exe (The input data is read from the keyboard, the output data is output to the terminal)"
    "\n\t./converter.exe --start (Essentially the same as ./converter, but in this case, you enter the data immediately)"
    "\n\t./converter.exe --start --path <input-file-path> --path <output-file-path> (The input and output data are files)"
    "\n\t./converter.exe --start --path <output-file-path> (The input data is read from the keyboard, the output data is a file)"
    "\nSo, what should we do next? Enter the command for further actions: ";

const char* SYNTAX_CALL = "There's a syntax of Unit Converter. In brackets you can see the names of the units for using "
    "in Unit Converter.\nAvailble categories and their units:"
    "\n1. Length ----> kilometer(km), meter(m), centimeter(cm), millimeter(mm), micrometer(um), nanometer(nm), mile(mile), foot(ft), "
    "yard(yard), inch(inch), nautical mile(nmi)"
    "\n2. Time ----> nanosecond(ns), microsecond(us), millisecond(ms), second(sec), minute(min), hour(hour), day(day), week(week), "
    "month(month), year(year), decade(decade), century(century)"
    "\n3. Rate ---->kilometer per hour(km/h), meter per second (m/s), mile per hour(m/h), foot per second(ft/s), knot(kt)"
    "\n4. Data size ----> bit(bit), kilobit(kbit), megabit(mbit), gigabit(gbit), terabit(tbit), petabit(pbit), byte(b), kilobyte(kb), megabyte(mb), gigabyte(gb), terabyte(tb), petabyte(pb)"
    "\n5. Data-rate ---->"
    "\nSo, what should we do next? Enter the command for further actions: ";

void command_requester(DefineUnits* units)
{
    char* command = malloc(MAX_STRING_LENGTH * sizeof(char));
    fgets(command, MAX_STRING_LENGTH, stdin);
    //scanf("%s", command);
    if (strcmp(command, "start\n") == 0) {
        input_data(units);
    } else if (strcmp(command, "help\n") == 0) {
        printf("%s", HELP_CALL);
        command_requester(units);
    } else if (strcmp(command, "syntax\n") == 0) {
        printf("%s", SYNTAX_CALL);
        command_requester(units);
    } else if (strcmp(command, "finish\n") == 0) {
        return;
    } else {
        printf("Oh, I see you don't know any command. Write \'help\' to learn more about commands: ");
        command_requester(units);
    }
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
    printf("So, what should we do next? Enter the command for further actions: ");
    command_requester(units);
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
        printf("Failed to open file located at %s\n", in_file_name);
        return -1;
    }

    FILE* out_file = fopen(out_file_name, "w");
    if (out_file == NULL) {
        printf("Failed to open file located at %s\n", out_file_name);
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