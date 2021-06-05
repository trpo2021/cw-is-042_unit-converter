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

CTEST(is_alpha, correct_string_4)
{
    char* string = "MiCrOmEtErs";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_5)
{
    char* string = "Meterss";
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
    char* string = "Km.";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_9)
{
    char* string = "k1l0m3t3rs";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_10)
{
    char* string = " km";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_11)
{
    char* string = "M3t3r$";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_12)
{
    char* string = "cm.";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_13)
{
    char* string = "C4anT1-m3t3r$";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_14)
{
    char* string = "m111i-m_3eters";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_15)
{
    char* string = "mm.";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_16)
{
    char* string = "um.";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_17)
{
    char* string = "m1cr0m3tR$";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_18)
{
    char* string = "nm/";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_19)
{
    char* string = "n m";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_20)
{
    char* string = "nanom3t3rs";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_21)
{
    char* string = "m1les";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_22)
{
    char* string = "miles.";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_23)
{
    char* string = "F00t$";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}

CTEST(is_alpha, incorrect_string_24)
{
    char* string = "ft.";
    const bool real = is_alpha(string);

    ASSERT_FALSE(real);
}