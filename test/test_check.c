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
    char* string = "tIMe";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_3)
{
    char* string = "LEngtH";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_4)
{
    char* string = "RAte";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_5)
{
    char* string = "dATa-sIZe";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_6)
{
    char* string = "Km";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_7)
{
    char* string = "m";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_8)
{
    char* string = "cM";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_9)
{
    char* string = "mM";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_10)
{
    char* string = "MiCrOmEtErs";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_11)
{
    char* string = "Meterss";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_12)
{
    char* string = "um";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_13)
{
    char* string = "NM";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_14)
{
    char* string = "mILE";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_15)
{
    char* string = "FT";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_16)
{
    char* string = "yARd";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_17)
{
    char* string = "inch";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_18)
{
    char* string = "nMI";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_19)
{
    char* string = "NS";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_20)
{
    char* string = "us";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_21)
{
    char* string = "ms";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_22)
{
    char* string = "SEC";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_23)
{
    char* string = "mIn";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_24)
{
    char* string = "hOUr";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_25)
{
    char* string = "Day";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_26)
{
    char* string = "WeeK";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_27)
{
    char* string = "monTH";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_28)
{
    char* string = "Year";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_29)
{
    char* string = "DecAdE";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_30)
{
    char* string = "Century";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_31)
{
    char* string = "mPh";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_32)
{
    char* string = "FPS";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_33)
{
    char* string = "mpS";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_34)
{
    char* string = "kmph";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_35)
{
    char* string = "KT";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_36)
{
    char* string = "BIT";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_37)
{
    char* string = "Kbit";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_38)
{
    char* string = "mBit";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_39)
{
    char* string = "GBIt";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_40)
{
    char* string = "tbit";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_41)
{
    char* string = "pBiT";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_42)
{
    char* string = "b";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_43)
{
    char* string = "kb";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_44)
{
    char* string = "MB";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_45)
{
    char* string = "gB";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_46)
{
    char* string = "TB";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_47)
{
    char* string = "pb";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_48)
{
    char* string = "bitps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_49)
{
    char* string = "kbitps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_50)
{
    char* string = "kbps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_51)
{
    char* string = "kbbitps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_52)
{
    char* string = "mbitps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_53)
{
    char* string = "mbps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_54)
{
    char* string = "mbbitps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_55)
{
    char* string = "gbitps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_56)
{
    char* string = "gbps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_57)
{
    char* string = "gbbitps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_58)
{
    char* string = "tbitps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_59)
{
    char* string = "tbps";
    const bool real = is_alpha(string);

    ASSERT_TRUE(real);
}

CTEST(is_alpha, correct_string_60)
{
    char* string = "tbbitps";
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

CTEST(is_positive, correct_value_1)
{
    double value = 0;
    const bool real = is_positive(value);

    ASSERT_TRUE(real);
}

CTEST(is_positive, correct_value_2)
{
    double value = 31201302132.123031201231012331223;
    const bool real = is_positive(value);

    ASSERT_TRUE(real);
}

CTEST(is_positive, correct_value_3)
{
    double value = .12303210;
    const bool real = is_positive(value);

    ASSERT_TRUE(real);
}

CTEST(is_positive, correct_value_4)
{
    double value
            = 0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001;
    const bool real = is_positive(value);

    ASSERT_TRUE(real);
}

CTEST(is_positive, incorrect_value_1)
{
    double value = -1;
    const bool real = is_positive(value);

    ASSERT_FALSE(real);
}

CTEST(is_positive, incorrect_value_2)
{
    double value
            = -13120123012301231230.13200132201230210123312323113202130321312;
    const bool real = is_positive(value);

    ASSERT_FALSE(real);
}

CTEST(is_positive, incorrect_value_3)
{
    double value = -.2311320132123213321132123349234203129;
    const bool real = is_positive(value);

    ASSERT_FALSE(real);
}

CTEST(is_positive, incorrect_value_4)
{
    double value
            = -0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001;
    const bool real = is_positive(value);

    ASSERT_FALSE(real);
}

CTEST(is_digit, correct_string_1)
{
    char* string = "0";
    const bool real = is_digit(string);

    ASSERT_TRUE(real);
}

CTEST(is_digit, correct_string_2)
{
    char* string = "3129312132132.132931291239132923929123";
    const bool real = is_digit(string);

    ASSERT_TRUE(real);
}

CTEST(is_digit, correct_string_3)
{
    char* string = "+129.012030132";
    const bool real = is_digit(string);

    ASSERT_TRUE(real);
}

CTEST(is_digit, correct_string_4)
{
    char* string = "+.56765";
    const bool real = is_digit(string);

    ASSERT_TRUE(real);
}

CTEST(is_digit, correct_string_5)
{
    char* string = "+0.56473";
    const bool real = is_digit(string);

    ASSERT_TRUE(real);
}

CTEST(is_digit, incorrect_string_1)
{
    char* string = "";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_2)
{
    char* string = "-3129.012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_3)
{
    char* string = "-1.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_4)
{
    char* string = "343.0982$";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_5)
{
    char* string = "$";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_6)
{
    char* string = "3425*";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_7)
{
    char* string = "/2.030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_8)
{
    char* string = "++129.012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}


CTEST(is_digit, incorrect_string_9)
{
    char* string = "23@,929839283";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_10)
{
    char* string = "(129.012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_11)
{
    char* string = ")129.012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_12)
{
    char* string = "&32";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_13)
{
    char* string = "?1637253932.32";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_14)
{
    char* string = "3129..012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_15)
{
    char* string = "^248374639845794.384739289463294";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_16)
{
    char* string = "!658736585.74638464";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_17)
{
    char* string = "@658365834.746846483";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_18)
{
    char* string = "-31\32";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_19)
{
    char* string = "=3129.012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_20)
{
    char* string = "_3129.012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_21)
{
    char* string = ";3129.012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_22)
{
    char* string = ":3129.012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_23)
{
    char* string = "><3129.012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_24)
{
    char* string = "+.129.012030132";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}

CTEST(is_digit, incorrect_string_25)
{
    char* string = "+.";
    const bool real = is_digit(string);

    ASSERT_FALSE(real);
}






























