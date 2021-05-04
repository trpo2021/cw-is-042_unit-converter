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

void input_data(DefineUnits units)
{
    printf("Unit category: ");
    scanf("%s", units.category);
    printf("You have: ");
    scanf("%lf", &units.have_value);
    scanf("%s", units.have_unit);
    printf("You want: ");
    scanf("%s", units.want_unit);
    printf("So, what should we do next? Enter the command for further actions: ");
    command_requester(units);
}

int check_number_of_commas(int number)
{
    if (number != 4) {
        printf("Unexpected number of columns in the input file.\n");
        return -1;
    }
    return 0;
}

int* get_commas(FILE* file_for_check)
{
    int comma_in_file[4];
    int count = 0;
    char tmp[MAXSIZE];
    for (int i = 0; !feof(file_for_check); ++i) {
        tmp[i] = fgetc(file_for_check);
        if (tmp[i] == ',') {
            comma_in_file[count] = i;
            count++;
        }
    }
    int* comma_ptr = comma_in_file;
    check_number_of_commas(count);

    return comma_ptr;
}

int file_reader(DefineUnits units, const char* in_file_name, const char* out_file_name)
{
    FILE* in_file = fopen(in_file_name, "rt");
    if (in_file == NULL) {
        printf("Failed to open file located at %s\n", in_file_name);
        return -1;
    }

    FILE* out_file = fopen(out_file_name, "w");
    if (out_file == NULL) {
        printf("Failed to open file located at %s\n", out_file_name);
        return -1;
    }

    int* commas = get_commas(in_file);
    int i;
    for (i = 0; i < commas[0]; ++i) {
        units.category[i] = fgetc(in_file);
        printf("%s\n", units.category);
    }

    return 0;
}