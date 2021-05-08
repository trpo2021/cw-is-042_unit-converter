#include <libconverter/output.h>

#include <stdio.h>
#include <string.h>

const char* HELP_CALL_ARG
        = "Welcome to Unit Converter!\nUsage:\n\t./converter.exe (The input "
          "data is read from the keyboard, the output data is output to the "
          "terminal)"
          "\n\t./converter.exe --start (Essentially the same as ./converter, "
          "but in this case, you enter the data immediately)"
          "\n\t./converter.exe --start --path <input-file-path> --path "
          "<output-file-path> (The input and output data are files)"
          "\n\t./converter.exe --start --path <output-file-path> (The input "
          "data is read from the keyboard, the output data is a file)"
          "\nNow enter the command for further actions: ";

const char* HELP_CALL
        = "Usage:\n\t./converter.exe (The input data is read from the "
          "keyboard, the output data is output to the terminal)"
          "\n\t./converter.exe --start (Essentially the same as ./converter, "
          "but in this case, you enter the data immediately)"
          "\n\t./converter.exe --start --path <input-file-path> --path "
          "<output-file-path> (The input and output data are files)"
          "\n\t./converter.exe --start --path <output-file-path> (The input "
          "data is read from the keyboard, the output data is a file)\n";

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
          "\n3. Rate ----> kilometer per hour(km/h), meter per second (m/s), "
          "mile per hour(m/h), foot per second(ft/s), knot(kt)"
          "\n4. Data size ----> bit(bit), kilobit(kbit), megabit(mbit), "
          "gigabit(gbit), terabit(tbit), petabit(pbit), byte(b), kilobyte(kb), "
          "megabyte(mb), gigabyte(gb), terabyte(tb), petabyte(pb)"
          "\n5. Data-rate ----> bit per second(bit/s), kilobit per second "
          "(kbit),kebibit per second(kbbit/s), megabit per second(mbit/s) "
          "mebibit per second(mbbit/s), gigabit per second(gbit/s), gebibit "
          "per second(gbbit), terabit per second(tbit/s), tebibit per "
          "second(tbbit/s), petabit per second(pbit/s), pebibit per "
          "second(pbbit/s), kilobyte per second(kb/s), megabyte per "
          "second(mb/s), gigabyte per second(gb/s), terabyte per second(tb/s), "
          "petabyte per second(pb/s)\n";

void output_data(DefineUnits* units)
{
    printf("Result: %lf %s", units->want_value, units->want_unit);
}

void welcomer(void)
{
    printf("Welcome to Unit Converter! Enter the command for further "
           "actions: ");
}

void call_help(char* help)
{
    if (strcmp(help, "--help") == 0) {
        printf("%s", HELP_CALL_ARG);
    } else if (strcmp(help, "help\n") == 0) {
        printf("%s", HELP_CALL);
        what_next();
    } else if (strcmp(help, "syntax\n") == 0) {
        printf("%s", SYNTAX_CALL);
        what_next();
    }
}

void what_next(void)
{
    printf("So, what should we do next? Enter the command for further "
           "actions: ");
}

void memory_error(void)
{
    printf("Failed to allocate memory\n");
}

void file_error(const char* file_path)
{
    printf("Failed to open file located at %s\n", file_path);
}

void helper_message(char* difficulty)
{
    if (strcmp(difficulty, "argument") == 0) {
        printf("Unexpected command line argument!\nTry using \'./converter.exe "
               "--help\' to find out how to successfully launch the "
               "application.\n");
    } else if (strcmp(difficulty, "command") == 0) {
        printf("Oh, I see you don't know any command. Write \'help\' to learn "
               "more about commands: ");
    } else if (strcmp(difficulty, "category") == 0) {
        printf("Units must be of the same category! To find out which units "
               "correspond to which category, enter the command 'syntax'.\n");
    }
}