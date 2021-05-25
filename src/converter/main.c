#include <libconverter/converter.h>
#include <libconverter/input.h>
#include <libconverter/output.h>

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    DefineUnits* units = malloc(sizeof(DefineUnits*));
    if (units == NULL) {
        memory_error();
        return -1;
    }
    if (argc == 2
        && (strcmp(argv[1], "--help") == 0
            || strcmp(argv[1], "--syntax") == 0)) {
        call_help(argv[1]);
    } else if (
            argc == 4 && isalpha(*argv[1]) && isalpha(*argv[2])
            && isalpha(*argv[3])) {
        units = init_units_struct(units, argc, argv);
    } else if (
            argc == 5 && isalpha(*argv[1]) && isdigit(*argv[2])
            && isalpha(*argv[3]) && isalpha(*argv[4])) {
        units = init_units_struct(units, argc, argv);
    } else if (
            argc == 5 && strcmp(argv[1], "--path") == 0
            && strcmp(argv[3], "--path") == 0) {
        printf("Coming soon...\n");
        // file_reader(units, argv[2], argv[4]);
    } else {
        helper_message("argument");
        return -1;
    }
    printf("%s %lf %s --> ? %s\n",
           units->category,
           units->have_value,
           units->have_unit,
           units->want_unit);
    int num_of_result = convert_units(units);
    if (num_of_result == -1) {
        helper_message("category");
    } else if (num_of_result == -2) {
        file_error("a =)");
    }
    free(units);
    return 0;
}