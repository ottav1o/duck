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
        fprintf(stderr, "ERROR: Cannot allocate necessary memory for text buffer.\n");
        return 1;
    }
    
    size_t buffer_size = 8;
    
    int ch;
    size_t i;
    for (i = 0; (ch = getc(fptr)) != EOF; i++) {
        if (i >= buffer_size) {
            buffer_size += 8;
            buffer = realloc(buffer, sizeof(char) * buffer_size);
            if (buffer == NULL) {
                fprintf(stderr, "ERROR: Cannot reallocate necessary memory for text buffer.\n");
                return 1;
            }
        }

        if (ch == EOF)
            break;
        
        buffer[i] = ch;
    }
    buffer[i] = '\0';

    printf("%s\n", buffer);
    puts("-- End of File --");
    
    return 0;
}