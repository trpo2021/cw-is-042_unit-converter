#include <libconverter/output.h>

#include <stdio.h>

void output_data(DefineUnits* units)
{
    printf("Result: %lf %s", units->want_value, units->want_unit);
}