#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF 1024
#define VERSION "1.0"

void arg_handler(int argc, char *argv[]){
    // Help message
    if(argc==2 && (!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help"))){
        printf("Usage: findinf [FILE] [STRING]\n\
\n\
Options:\n\
\t-h, --help\tshow this help message, then exit\n\
\t-v, --version\tshow the version number, then exit\n");
        exit(EXIT_SUCCESS);
    } else if (argc==2 && (!strcmp(argv[1], "-v") || !strcmp(argv[1], "--version"))){
        printf("findinf %s\n", VERSION);
        exit(EXIT_SUCCESS);
    }

    // Errors
    if (argc > 3){
        fprintf(stderr, "findinf: Too many arguments\n");
        exit(EXIT_FAILURE);
    } else if (argc < 3){
        fprintf(stderr, "findinf: Not enough arguments\n");
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char *argv[]){
    // String to be found
    char *str = argv[2];
    // File to be read
    FILE *fp = fopen(argv[1], "r");
    char buff[BUFF];
    char buff_copy[BUFF];

    // Command line arguments
    arg_handler(argc, argv);

    // File errors
    if (!fp){
        perror("findinf: ");
    }

    // File reading
    while(fp && fgets(buff, BUFF, fp)){
        // Copy the string
        strcpy(buff_copy, buff);
        // Find the string in the buffer and print it out
        if (strstr(buff, str)){
            printf("%s", buff_copy);
        }
    }
}
