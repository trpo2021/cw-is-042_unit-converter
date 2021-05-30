#include <libconverter/output.h>

#include <stdio.h>
#include <string.h>

const char* HELP_CALL
        = "Welcome to Unit Converter!\nUsage:\n\t./converter.exe <category> "
          "<double> <have-unit> <want-unit> (The input "
          "data is read from the keyboard, the output data is output to the "
          "terminal)"
          "\n\t./converter.exe --syntax (Information about categories and "
          "units of measurement is issued)"
          "\n\t./converter.exe --path <input-file-path> --path "
          "<output-file-path> (The input and output data are files)\n";

const char* SYNTAX_CALL
        = "There's a syntax of Unit Converter. In brackets you can see the "
          "names of the units for using "
          "in Unit Converter.\nAvailble categories and their units:"
          "\n1. Length ----> kilometer(km), meter(m), centimeter(cm), "
          "millimeter(mm), micrometer(um), nanometer(nm), mile(mile), "
          "foot(ft), "
          "yard(yard), inch(inch), nautical mile(nmi)"
          "\n2. Time ----> nanosecond(ns), microsecond(us), millisecond(ms), "
          "second(sec), minute(min), hour(hour), day(day), week(week), "
          "month(month), year(year), decade(decade), century(century)"
          "\n3. Rate ----> kilometer per hour(kmph), meter per second(mps), "
          "mile per hour(mph), foot per second(fps), knot(kt)"
          "\n4. Data size ----> bit(bit), kilobit(kbit), megabit(mbit), "
          "gigabit(gbit), terabit(tbit), petabit(pbit), byte(b), kilobyte(kb), "
          "megabyte(mb), gigabyte(gb), terabyte(tb), petabyte(pb)"
          "\n5. Data-rate ----> bit per second(bitps), kilobit per second "
          "(kbitps),kebibit per second(kbbitps), megabit per second(mbitps) "
          "mebibit per second(mbbitps), gigabit per second(gbitps), gebibit "
          "per second(gbbitps), terabit per second(tbitps), tebibit per "
          "second(tbbitps), kilobyte per second(kbps), megabyte per "
          "second(mbps), gigabyte per second(gbps), terabyte per "
          "second(tbps)\n";

void output_data(DefineUnits* units)
{
    printf("Result: %0.8lf %s\n", units->want_value, units->want_unit);
}

void call_help(char* help)
{
    if (strcmp(help, "--help") == 0) {
        printf("%s", HELP_CALL);
    } else if (strcmp(help, "--syntax") == 0) {
        printf("%s", SYNTAX_CALL);
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
        printf("Failed to allocate memory\n");
        break;
    case -3:
        printf("Unexpected command line argument!\nTry using \'./converter.exe "
               "--help\' to find out how to successfully launch the "
               "application.\n");
        break;
    case -4:
        printf("The value you entered is too large. Try to enter a value "
               "less!\n");
        break;
    case -5:
        printf("Could not open or create file. Make sure to enter the correct "
               "path!\n");
        break;
    default:
        printf("Unable to open file with unit data. Try to run the app from "
               "the root of the repository with \'./bin/converter.exe\'\n");
        break;
    }
}