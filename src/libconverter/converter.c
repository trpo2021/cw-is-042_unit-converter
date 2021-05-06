#include <libconverter/converter.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static char* to_lower_string(char* string)
{
    size_t len = strlen(string);
    char* tmp = malloc(len * sizeof(char));
    tmp = strcpy(tmp, string);
    for(int i = 0; tmp[i]; ++i) {
        tmp[i] = tolower(tmp[i]);
    }

    return tmp;
}

DefineUnits* convert_units(DefineUnits* units)
{
    if (strcmp(to_lower_string(units->category), "length\n") == 0) {
        // from_length_unit(have_value, have_unit, want_unit);
    } else if (strcmp(to_lower_string(units->category), "time\n") == 0) {
        // from_time_unit(have_value, have_unit, want_unit);
    } else if (strcmp(to_lower_string(units->category), "rate\n") == 0) {
        // from_rate_unit(have_value, have_unit, want_unit);
    } else if (strcmp(to_lower_string(units->category), "data size\n") == 0) {
        // from_data_size_unit(have_value, have_unit, want_unit);
    } else if (strcmp(to_lower_string(units->category), "data-rate\n") == 0) {
        // from_data_rate_unit(have_value, have_unit, want_unit);
    }
    return units;
}