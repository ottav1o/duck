#include "utils.h"
#include "args.h"

int main(int argc, const char **argv) {
    (argc < MINIMUM_ARGS) ? app_help() : parse_args(argv, argc);
    
    return 0;
}
