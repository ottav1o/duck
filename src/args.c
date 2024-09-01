#include "args.h"

#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "file.h"

int parse_args(const char **argv, int argc) {
    // Iterate through all arguments
    for (int i = 1; i < argc; i++) {
        const char *arg = argv[i];
        
        if (strcmp(arg, "--help") == 0) {
            app_help();
        } else {
            read_file(arg);
        }
    }
    
    return 0;
}