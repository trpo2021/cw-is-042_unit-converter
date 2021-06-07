#include <libconverter/output.h>

#include <stdio.h>
#include <string.h>

const char* HELP_CALL
        = "Welcome to Unit Converter!\nUsage:\n\t./converter <category> "
          "<double> <have-unit> <want-unit> (The input "
          "data is read from the keyboard, the output data is output to the "
          "terminal)"
          "\n\t./converter <category> "
          "<have-unit> <want-unit> (Analogous to the first input, but the "
          "output will be conversion factors to get the result by multiplying "
          "or dividing)"
          "\n\t./converter --syntax (Information about categories of "
          "measurement is issued)\n"
          "\n\t./converter --syntax <category> (Information about units of "
          "measurement from a specific category is issued)\n";

const char* SYNTAX_CALL
        = "There's a syntax of available categories in Unit Converter:\nLength "
          "   Time    Rate    Data-Size    Data-Rate\nTo learn about the "
          "syntax for units from a specific category, enter: ./converter "
          "--syntax <category>\n";

const char* LENGTH_SYNTAX
        = "There's a syntax for units of the 'Length' category in Unit "
          "Converter, represented as <unit-name> -> "
          "<converter-unit-name>:\ncentimeter -> cm    mile -> mile    "
          "kilometer -> km        foot -> ft\nmicrometer -> um    yard -> yard "
          "   nanometer -> nm        meter -> m\nmillimeter -> mm    inch -> "
          "inch    nautical mile -> nmi\n";

const char* TIME_SYNTAX
        = "There's a syntax for units of the 'Time' category in Unit "
          "Converter, represented as <unit-name> -> "
          "<converter-unit-name>:\nmillisecond -> ms    hour -> hour    second "
          "-> sec    decade -> decade\nmicrosecond -> us    week ->week     "
          "minute -> min    century->century\nnanosecond -> ns     year -> "
          "year    month -> month   day -> day\n";

const char* RATE_SYNTAX
        = "There's a syntax for units of the 'Rate' category in Unit "
          "Converter, represented as <unit-name> -> "
          "<converter-unit-name>:\nmeter per second -> mps    kilometer per "
          "hour -> kmph\nfoot per second -> fps     knot -> kt\nmile per hour "
          "-> mph\n";

const char* DATA_SIZE_SYNTAX
        = "There's a syntax for units of the 'Data-Size' category in Unit "
          "Converter, represented as <unit-name> -> "
          "<converter-unit-name>:\nkilobit -> kbit    terabit -> tbit    "
          "kilobyte -> kb    petabyte -> pb\nmegabit -> mbit    petabit -> "
          "pbit    gigabyte -> gb    bit -> bit\ngigabit -> gbit    megabyte "
          "-> mb     terabyte -> tb    byte -> b\n";

const char* DATA_RATE_SYNTAX
        = "There's a syntax for units of the 'Data-Rate' category in Unit "
          "Converter, represented as <unit-name> -> "
          "<converter-unit-name>:\nkebibit per second -> kbbitps    mebibit "
          "per second -> mbbitps    gebibit per second -> gbbitps    tebibit "
          "per second -> tbbitps\nkilobit per second -> kbitps     megabit per "
          "second -> mbitps     gigabit per second -> gbitps     terabit per "
          "second -> tbitps\nkilobyte per second -> kbps      megabyte per "
          "second -> mbps      gigabyte per second -> gbps      terabyte per "
          "second -> tbps\n";

void output_data(DefineUnits* units)
{
    printf("Result: %0.8lf %s\n", units->want_value, units->want_unit);
}

void output_factor(DefineUnits* units)
{
    printf("For conversion, you can use the following factors:\n\t* "
           "%0.8lf\n\t/ %0.8lf\n",
           units->factor,
           1 / units->factor);
}

void call_help(char* help)
{
    if (strcmp(help, "--help") == 0) {
        printf("%s", HELP_CALL);
    } else if (strcmp(help, "--syntax") == 0) {
        printf("%s", SYNTAX_CALL);
    } else {
        output_error(ErrorTypeArgument);
    }
}

void output_syntax(char* category)
{
    if (strcmp(category, "length") == 0) {
        printf("%s", LENGTH_SYNTAX);
    } else if (strcmp(category, "time") == 0) {
        printf("%s", TIME_SYNTAX);
    } else if (strcmp(category, "rate") == 0) {
        printf("%s", RATE_SYNTAX);
    } else if (strcmp(category, "data-size") == 0) {
        printf("%s", DATA_SIZE_SYNTAX);
    } else if (strcmp(category, "data-rate") == 0) {
        printf("%s", DATA_RATE_SYNTAX);
    } else {
        printf("Unknown category, try using \'./converter.exe --syntax\'.\n");
    }
}

void output_error(int n)
{
    switch (n) {
    case -1:
        printf("Units must be of the same category! To find out which units "
               "correspond to which category, enter \'./converter.exe "
               "--syntax\'.\n");
        break;
    case -2:
        printf("Unexpected command line argument!\nTry using \'./converter.exe "
               "--help\' to find out how to successfully launch the "
               "application.\n");
        break;
    case -3:
        printf("The value you entered is too large. Try to enter a value "
               "less!\n");
        break;
    default:
        printf("Unable to open file with unit data. Try to run the app from "
               "the root of the repository with \'./bin/converter.exe\'\n");
        break;
    }
}