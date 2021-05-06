#include <libconverter/units/units.h>
#include <string.h>

double from_time_unit(double value, char* have_unit, char* want_unit)
{
    if (strcmp(have_unit, want_unit) == 0) {
        return value;
    }
    if (strcmp(have_unit, "ns\n") == 0) {
        value /= 1000000000;
    } else if (strcmp(have_unit, "us\n") == 0) {
        value /= 1000000;
    } else if (strcmp(have_unit, "ms\n") == 0) {
        value /= 1000;
    } else if (strcmp(have_unit, "min\n") == 0) {
        value *= 60;
    } else if (strcmp(have_unit, "hour\n") == 0) {
        value *= 3600;
    } else if (strcmp(have_unit, "day\n") == 0) {
        value *= 86400;
    } else if (strcmp(have_unit, "week\n") == 0) {
        value *= 604800;
    } else if (strcmp(have_unit, "month\n") == 0) {
        value *= 2678400;
    } else if (strcmp(have_unit, "year\n") == 0) {
        value *= 31536000;
    } else if (strcmp(have_unit, "decade\n") == 0) {
        value *= 315360000;
    } else if (strcmp(have_unit, "century\n") == 0) {
        value *= 3153600000;
    } else if (strcmp(have_unit, "sec\n") != 0) {
        printf("It looks like you entered the wrong unit name. Use the command \'syntax\' to see a list of possible units: ");
        // command_requester(units);
    }
    value = to_time_unit(value, want_unit);
}