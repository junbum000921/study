#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char temp[200];
    FILE* f = fopen("hello123.txt", "rt");
    if (f != NULL) {
        if (fgets(temp, 200, f) != NULL) {        
            printf("temp = %s, feof(f) = %d\n", temp, feof(f));
        }
        if (fgets(temp, 200, f) != NULL) {
            printf("temp = %s, feof(f) = %d\n", temp, feof(f));
        }
        else {
            printf("feof(f) = %d\n", feof(f));
        }
        fclose(f);        
    }
    return 0;
}