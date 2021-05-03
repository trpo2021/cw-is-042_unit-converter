#include <libconverter/input.h>
#include <stdio.h>
#include <string.h>

const char* HELP_CALL = "Usage:\n\t./converter.exe (The input data is read from the keyboard, the output data is output to the terminal)"
    "\n\t./converter.exe --start (Essentially the same as ./converter, but in this case, you enter the data immediately)"
    "\n\t./converter.exe --start --path <input-file-path> --path <output-file-path> (The input and output data are files)"
    "\n\t./converter.exe --start --path <output-file-path> (The input data is read from the keyboard, the output data is a file)"
    "\nSo, what should we do next? Enter the command for further actions: ";

void command_requester(DefineUnits units)
{
    char command[MAXSIZE];
    scanf("%s", command);
    if (strcmp(command, "start") == 0) {
        input_data(units);
    } else if (strcmp(command, "help") == 0) {
        printf("%s", HELP_CALL);
        command_requester(units);
    } else if (strcmp(command, "syntax") == 0) {
        printf("~There will be information on the syntax of the entered units of measure~\nInput next command: ");
        command_requester(units);
    } else if (strcmp(command, "finish") == 0) {
        return;
    } else {
        printf("Oh, I see you don't know any command. Write \'help\' to learn more about commands: ");
        command_requester(units);
    }
}