#include <libconverter/input.h>
#include <stdio.h>
#include <string.h>

const char* HELP_CALL_ARG = "Welcome to Unit Converter!\nUsage:\n\t./converter.exe (The input data is read from the keyboard, the output data is output to the terminal)"
    "\n\t./converter.exe --start (Essentially the same as ./converter, but in this case, you enter the data immediately)"
    "\n\t./converter.exe --start --path <input-file-path> --path <output-file-path> (The input and output data are files)"
    "\n\t./converter.exe --start --path <output-file-path> (The input data is read from the keyboard, the output data is a file)"
    "\nNow enter the command for further actions: ";

int main(int argc, char *argv[])
{
    DefineUnits units;
    if (argc == 1) {
        printf("Welcome to Unit Converter! Enter the command for further actions: ");
        command_requester(units);
    } else if (argc == 2) {
        if (strcmp(argv[1], "--start") == 0) {
            input_data(units);
        } else if (strcmp(argv[1], "--help") == 0) {
            printf("%s", HELP_CALL_ARG);
            command_requester(units);
        }
    } else if ((argc == 4) && (strcmp(argv[1], "--start") == 0) && (strcmp(argv[2], "--path") == 0)) {
        input_data(units);
    } else if ((argc == 6) && (strcmp(argv[1], "--start") == 0) && (strcmp(argv[2], "--path") == 0) && (strcmp(argv[4], "--path") == 0)) {
        // There will be input-output-file func
    } else {
        printf("Unexpected command line argument!\nTry using \'./converter.exe --help\' to find out how to successfully launch the application.\n");
    }
    return 0;
}