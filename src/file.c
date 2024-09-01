#include "file.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int read_file(const char *filename) {
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Cannot open file \"%s\" in read (\"%c\") mode.\n", filename, 'r');
        printf("You're sure that this file exists?\n");
        
        return 1;
    }
    
    char *buffer = malloc(sizeof(char) * 8);
    if (buffer == NULL) {
        fclose(fptr);
        assert(buffer != NULL);
    }
    
    size_t buffer_size =  8;
    
    int ch;
    size_t i = 0;
    do {
        ch = fgetc(fptr);
        
        if (i == buffer_size - 1) {
            buffer_size += 8;
            buffer = realloc(buffer, sizeof(char) * buffer_size);
        }
        
        buffer[i] = ch;
        
        i++;
    } while (ch != EOF);
    buffer[i] = '\0';

    printf("%s\n", buffer);
    
    return 0;
}