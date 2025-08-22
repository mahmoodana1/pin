#include "storage.h"
#include <stdio.h>

int storage_ensure(void) {
    FILE *f = fopen("PATHS.txt", "a");
    if (f == NULL) {
        printf("Couldn't open or create the paths file");
        return 1;
    }

    fclose(f);
    return 0;
}

int storage_append(const char *line) {
    FILE *f = fopen("PATHS.txt", "a");
    fprintf(f, "%s\n", line);
    fclose(f);
    return 0;
}
