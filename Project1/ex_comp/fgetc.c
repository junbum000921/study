#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readTwoChars(FILE* fr)
{
    int ch = fgetc(fr);
    int ch2 = fgetc(fr);
    printf("ch1 = %d ch2 = %d EOF = %d\n", ch, ch2, EOF);
}

int main(void)
{
    const char* fileName = "char.txt";
    
    FILE* fw = fopen(fileName, "wt");
    if (fw != NULL) {       
        fputc('\n', fw);
        fclose(fw);
    }
    
    printf("read two chars using text stream mode\n");
    FILE* fr = fopen(fileName, "rt");
    if (fr != NULL) {
        readTwoChars(fr);
        fclose(fr);
    }

    printf("read two chars using binary stream mode\n");
    FILE* fr2 = fopen(fileName, "rb");
    if (fr2 != NULL) {
        readTwoChars(fr2);
        fclose(fr2);
    }
    return 0;
}