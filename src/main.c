#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define BUFF 256

int main(int argc, char *argv[]){
    // String to be found
    char *str = argv[2];
    // File to be read
    FILE *fp = fopen(argv[1], "r");
    char buff[BUFF];
    char buff_copy[BUFF];

    if (argc > 3){
        fprintf(stderr, "findinf: Too many arguments\n");
        exit(EXIT_FAILURE);
    } else if (argc < 3){
        fprintf(stderr, "findinf: Not enough arguments\n");
        exit(EXIT_FAILURE);
    }
    if (!fp){
        perror("findinf: ");
    }

    while(fp && fgets(buff, BUFF, fp)){
        strcpy(buff_copy, buff);
        if (strstr(buff, str)){
            printf("%s", buff_copy);
        }
    }
}
