#include <libconverter/check.h>

#include <ctest.h>

CTEST(is_alpha, correct_string_1)
{
    char* string = "DatA-rAtE";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_2)
{
    char* string = "mBps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_3)
{
    char* string = "yEAr";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, incorrect_string_1)
{
    char* string = "Dat.A-rA2tE";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_2)
{
    char* string = "";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}