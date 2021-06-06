#include <libconverter/converter.h>

#include <ctest.h>

CTEST(convert_units, successful_conversion_1)
{
    DefineUnits units;
    units.category = "time";
    units.have_value = 1;
    units.have_unit = "hour";
    units.want_unit = "century";

    const int real = convert_units(&units);
    const int exp = 0;
    ASSERT_EQUAL(exp, real);
}