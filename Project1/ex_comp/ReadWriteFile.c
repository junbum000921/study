#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const char* fileName = "hello123.txt";
    FILE* fw = fopen(fileName, "wt");
    if (fw != NULL) {
        fprintf(fw, "hello world\n%d %.1f", 2, 3.2);
        fclose(fw);    
    }

    char str1[10];
    char str2[10];
    int n;
    double d;
    
    FILE* fr = fopen(fileName, "rt");
    if (fr != NULL) {
        fscanf(fr, "%s %s %d %lf", str1, str2, &n, &d);
        fclose(fr);
        printf("%s %s\n%d %.1f", str1, str2, n, d);    
    }
    return 0;
}