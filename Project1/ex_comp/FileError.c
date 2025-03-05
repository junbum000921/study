#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char* filename = "nofile.txt";
    FILE* f = fopen(filename, "rt");
    if (f == NULL) {
        printf("Cannot open file: %s. File: %s, Line: %d\n", filename, __FILE__, __LINE__ - 2);
        exit(0);
    }
    fclose(f);
    return 0;
}