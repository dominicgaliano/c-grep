#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void display_help(char* argv[])
{
    fprintf(stderr, "Usage: %s [-n] <pattern>\n", *argv);
}

int main(int argc, char* argv[])
{
    if (argc < 2) {
        display_help(argv);
        return 1;
    }

    bool show_line_numbers = false;
    char* substring;

    if (strcmp(argv[1], "-n") == 0) {
        if (argc < 3) {
            display_help(argv);
            return 1;
        }

        show_line_numbers = true;
        substring = argv[2];

    } else {
        substring = argv[1];
    }

    char line[MAX_LINE_LENGTH];
    int line_number = 1; // Line numbers are 1-indexed

    while ((fgets(line, sizeof(line), stdin)) && (*line != EOF)) {
        if (strstr(line, substring)) {
            if (show_line_numbers)
                printf("%d: ", line_number);
            printf("%s", line);
        }

        line_number++;
    }
}
