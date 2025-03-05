#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void copyFile(const char* destFileName, const char* srcFileName)
{
    FILE* fr = fopen(srcFileName, "rb");
    FILE* fw = fopen(destFileName, "wb");
    if (fr != NULL && fw != NULL) {
        int ch = fgetc(fr);
        while (ch != EOF) {
            fputc(ch, fw);
            ch = fgetc(fr);
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