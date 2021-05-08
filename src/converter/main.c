#include <libconverter/input.h>
#include <libconverter/output.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    DefineUnits* units = malloc(sizeof(DefineUnits*));
    if (units == NULL) {
        memory_error();
        return -1;
    }
    if (argc == 1) {
        welcomer();
        command_requester(units);
    } else if (argc == 2) {
        if (strcmp(argv[1], "--start") == 0) {
            input_data(units);
            output_data(units);
        } else if (strcmp(argv[1], "--help") == 0) {
            call_help(argv[1]);
            command_requester(units);
        }
    } else if ((argc == 4) && (strcmp(argv[1], "--start") == 0) && (strcmp(argv[2], "--path") == 0)) {
        input_data(units);
        // output_file(argv[3])
    } else if ((argc == 6) && (strcmp(argv[1], "--start") == 0) && (strcmp(argv[2], "--path") == 0) && (strcmp(argv[4], "--path") == 0)) {
        file_reader(units, argv[3], argv[5]);
    } else {
        printf("Unexpected command line argument!\nTry using \'./converter.exe --help\' to find out how to successfully launch the application.\n");
    }
    free(units);
    return 0;
}