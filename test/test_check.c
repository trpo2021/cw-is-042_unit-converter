#include <libconverter/check.h>

#include <ctest.h>
#include <stdlib.h>

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
    char* string
            = "-1."
              "0000000000000000000000000000000000000000000000000000000000000000"
              "0000000000000000000000000000000000000000000000000000000000000000"
              "0000000000000000000000000000000000000000000000000000000000000000"
              "000000000000000000000000000000000";
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

CTEST(check_number_length, correct_string_1)
{
    char* string = "1";
    const int real = check_number_length(string);
    const int exp = 0;
    ASSERT_EQUAL(exp, real);
}

CTEST(check_number_length, correct_string_2)
{
    char* string = "10000000000000000000";
    const int real = check_number_length(string);
    const int exp = 0;
    ASSERT_EQUAL(exp, real);
}

CTEST(check_number_length, correct_string_3)
{
    char* string = "9999999999999999999.99999999999999999999";
    const int real = check_number_length(string);
    const int exp = 0;
    ASSERT_EQUAL(exp, real);
}

CTEST(check_number_length, incorrect_string_1)
{
    char* string = "100000000000000000000";
    const int real = check_number_length(string);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(check_number_length, incorrect_string_2)
{
    char* string = "100000000000000000000000000000000000000000000000000";
    const int real = check_number_length(string);
    const int exp = -1;
    ASSERT_EQUAL(exp, real);
}

CTEST(is_appropriate, correct_time_units_1)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_2)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_3)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_4)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_5)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_6)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_7)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_8)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_9)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_10)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_11)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_12)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_13)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_14)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_15)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_16)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_17)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_18)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_19)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_20)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_21)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_22)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_23)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_24)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "ns";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_25)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_26)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_27)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_28)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_29)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_30)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_31)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_32)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_33)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_34)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_35)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_36)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "us";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_37)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_38)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_39)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_40)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_41)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_42)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_43)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_44)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_45)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_46)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_47)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_48)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "ms";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_49)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_50)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_51)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_52)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_53)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_54)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_55)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_56)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_57)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_58)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_59)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_60)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "sec";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_61)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_62)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_63)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_64)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_65)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_66)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_67)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_68)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_69)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_70)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_71)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_72)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "min";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_73)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_74)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_75)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_76)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_77)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_78)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_79)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_80)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_81)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_82)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_83)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_84)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "hour";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_85)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_86)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_87)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_88)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_89)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_90)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_91)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_92)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_93)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_94)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_95)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_96)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "day";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_97)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_98)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_99)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_100)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_101)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_102)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_103)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_104)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_105)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_106)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_107)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_108)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "week";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_109)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_110)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_111)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_112)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_113)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_114)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_115)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_116)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_117)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_118)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_119)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_120)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "month";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_121)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_122)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_123)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_124)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_125)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_126)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_127)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_128)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_129)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_130)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_131)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_132)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "year";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_133)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_134)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_135)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_136)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_137)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_138)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_139)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_140)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_141)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_142)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_143)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_144)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "decade";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_145)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ns";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_146)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "us";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_147)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "ms";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_148)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "sec";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_149)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "min";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_150)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "hour";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_151)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "day";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_152)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "week";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_153)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "month";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_154)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "year";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_155)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "decade";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}

CTEST(is_appropriate, correct_time_units_156)
{
    DefineUnits units;
    units.category = "time";
    units.have_unit = "century";
    units.want_unit = "century";

    ListNode* list;
    list = data_file_parser();
    ASSERT_NOT_NULL(list);

    const bool real = is_appropriate(list, &units);
    ASSERT_TRUE(real);
}