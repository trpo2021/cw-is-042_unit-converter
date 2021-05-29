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
        output_error(ErrorTypeMemory);
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
        output_error(ErrorTypeArgument);
        free(units);
        return -1;
    }
    int convert_status = convert_units(units);
    if (convert_status == 0) {
        output_data(units);
    } else {
        output_error(convert_status);
    }
    free(units);
    return 0;
}