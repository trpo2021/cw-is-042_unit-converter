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

CTEST(convert_units, successful_conversion_2)
{
    DefineUnits units;
    units.category = "length";
    units.have_value = 1000000.987;
    units.have_unit = "km";
    units.want_unit = "nm";

    const int real = convert_units(&units);
    const int exp = 0;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, successful_conversion_3)
{
    DefineUnits units;
    units.category = "data-rate";
    units.have_value = 100.765;
    units.have_unit = "bitps";
    units.want_unit = "tbbitps";

    const int real = convert_units(&units);
    const int exp = 0;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, successful_conversion_4)
{
    DefineUnits units;
    units.category = "data-size";
    units.have_value = 1765;
    units.have_unit = "pb";
    units.want_unit = "bit";

    const int real = convert_units(&units);
    const int exp = 0;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, successful_conversion_5)
{
    DefineUnits units;
    units.category = "time";
    units.have_value = 1;
    units.have_unit = "century";
    units.want_unit = "ns";

    const int real = convert_units(&units);
    const int exp = 0;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, successful_conversion_6)
{
    DefineUnits units;
    units.category = "rate";
    units.have_value = 1;
    units.have_unit = "mps";
    units.want_unit = "kmph";

    const int real = convert_units(&units);
    const int exp = 0;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, successful_conversion_7)
{
    DefineUnits units;
    units.category = "rate";
    units.have_value = 18745767574;
    units.have_unit = "mps";
    units.want_unit = "mph";

    const int real = convert_units(&units);
    const int exp = 0;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, unsuccessful_conversion_1)
{
    DefineUnits units;
    units.category = "time";
    units.have_value = 1;
    units.have_unit = "bit";
    units.want_unit = "century";

    const int real = convert_units(&units);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, unsuccessful_conversion_2)
{
    DefineUnits units;
    units.category = "t1me";
    units.have_value = 1;
    units.have_unit = "hour";
    units.want_unit = "century";

    const int real = convert_units(&units);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, unsuccessful_conversion_3)
{
    DefineUnits units;
    units.category = "time";
    units.have_value = 1;
    units.have_unit = "hour";
    units.want_unit = "c3ntury";

    const int real = convert_units(&units);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, unsuccessful_conversion_4)
{
    DefineUnits units;
    units.category = "time";
    units.have_value = 1;
    units.have_unit = "mps";
    units.want_unit = "century";

    const int real = convert_units(&units);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, unsuccessful_conversion_5)
{
    DefineUnits units;
    units.category = "length";
    units.have_value = 1;
    units.have_unit = "nmi";
    units.want_unit = "ns";

    const int real = convert_units(&units);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, unsuccessful_conversion_6)
{
    DefineUnits units;
    units.category = "rate";
    units.have_value = 1;
    units.have_unit = "mps";
    units.want_unit = "bitps";

    const int real = convert_units(&units);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, unsuccessful_conversion_7)
{
    DefineUnits units;
    units.category = "time";
    units.have_value = 100;
    units.have_unit = "%ns";
    units.want_unit = "century";

    const int real = convert_units(&units);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, unsuccessful_conversion_8)
{
    DefineUnits units;
    units.category = "time";
    units.have_value = 1;
    units.have_unit = "hoour";
    units.want_unit = "century";

    const int real = convert_units(&units);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(convert_units, unsuccessful_conversion_9)
{
    DefineUnits units;
    units.category = "data-rate";
    units.have_value = 1;
    units.have_unit = "bbitps";
    units.want_unit = "ns";

    const int real = convert_units(&units);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(data_file_parser, successful_parcing)
{
    const ListNode* real = data_file_parser();
    ASSERT_NOT_NULL(real);
}

CTEST(to_lower_string, equal_string_1)
{
    const char exp[] = "f";

    char real[] = "F";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_2)
{
    const char exp[] = "data-rate";

    char real[] = "DaTa-RATE";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_3)
{
    const char exp[] = "foot";

    char real[] = "FoOT";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_4)
{
    const char exp[] = "seconds";

    char real[] = "SEConds";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_5)
{
    const char exp[] = "yard";

    char real[] = "YARD";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_6)
{
    const char exp[] = "time";

    char real[] = "TIME";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_7)
{
    const char exp[] = "nanoseconds";

    char real[] = "NANOSECOnds";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_8)
{
    const char exp[] = "minute";

    char real[] = "MINUTE";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_9)
{
    const char exp[] = "rate";

    char real[] = "RaTe";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_10)
{
    const char exp[] = "gbbitps";

    char real[] = "gBBITPS";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_11)
{
    const char exp[] = "sus";

    char real[] = "SUS";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}

CTEST(to_lower_string, equal_string_12)
{
    const char exp[] = "slava_marlay";

    char real[] = "SLAVA_MARLAY";
    to_lower_string(real);

    ASSERT_STR(exp, real);
}