#include <libconverter/check.h>
#include <libconverter/converter.h>
#include <libconverter/output.h>

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    DefineUnits units;
    if (argc == 2
        && (strcmp(argv[1], "--help") == 0
            || strcmp(argv[1], "--syntax") == 0)) {
        call_help(argv[1]);
        return 0;
    }
    if (argc == 4 && is_alpha(argv[1]) && is_alpha(argv[2])
        && is_alpha(argv[3])) {
        init_units_struct(&units, argc, argv);
    } else if (
            argc == 5 && is_alpha(argv[1]) && is_digit(argv[2])
            && is_alpha(argv[3]) && is_alpha(argv[4])) {
        int length_status = check_number_length(argv[2]);
        if (length_status == -1) {
            output_error(ErrorTypeLargeValue);
            return -1;
        }
        init_units_struct(&units, argc, argv);
    } else {
        output_error(ErrorTypeArgument);
        return -1;
    }
    int convert_status = convert_units(&units);
    if (convert_status == 0) {
        if (argc == 5) {
            output_data(&units);
        } else {
            output_factor(&units);
        }
    } else {
        output_error(convert_status);
    }
    return 0;
}