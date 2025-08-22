#include "storage.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    storage_ensure();

    if ((argc == 3) && strcmp(argv[1], "add") == 0) {
        storage_append(argv[2]);
        printf("Added %s to the Paths file", argv[2]);
        return 0;
    } else {
        printf("Please make sure to use 3 arguments ass follows ./pin add "
               "Path/path/path.....\n");
        printf(":Hey git!");
        return 1;
    }
    return 0;
}
