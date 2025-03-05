#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 200

void copyFile(const char* destFileName, const char* srcFileName)
{
    char str[SIZE];

    FILE* fr = fopen(srcFileName, "rt");
    FILE* fw = fopen(destFileName, "wt");
    if (fr != NULL && fw != NULL) {
        char* s = fgets(str, SIZE, fr);
        while (s != NULL) {
            fputs(s, fw);
            s = fgets(str, SIZE, fr);
        }
        fclose(fr);
        fclose(fw);    
    }
}

int main(int argc, char* argv[])
{
    if (argc < 3) {
        printf("Usage: %s srcFile destFile\n", argv[0]);
        return 0;
    }
    copyFile(argv[2], argv[1]);
    return 0;
}