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

CTEST(is_alpha, incorrect_string_3)
{
    char* string = "lE+2nGt0Th";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_4)
{
    char* string = "Dat2A_s1ze";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_5)
{
    char* string = "d4t4-rate";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_6)
{
    char* string = "T1me";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_7)
{
    char* string = "r4T3";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_8)
{
    char* string = "Скорость данных";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}