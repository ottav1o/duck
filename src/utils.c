#include "utils.h"

#include <stdio.h>

int app_help(void) {
    printf("DUCK - VERSION \"%s\" - CODENAME \"%s\"\n", DUCK_VERSION, DUCK_CODENAME);
    printf("USAGE: duck [FILE]\n");
    
    return 0;
}