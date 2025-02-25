#include <stdio.h>

int findNewLineChar(char* pstr, char** newLinePos)
{
    while (*pstr != '\n' && *pstr != '\0') { pstr++; }
    if (*pstr == '\n') { 
        *newLinePos = pstr;
        return 1;
    }
    else if (*pstr == '\0') {
        *newLinePos = NULL;
        return 0;
    }
    return 0;
}

int main(void)
{
    char str[] = "C Programming 1, 90, 86\nMath, 85, 80\nSW English, 90, 90";
        
    char* newLinePos;
    if (findNewLineChar(str, &newLinePos)) {
        printf("Second line = %s\n", newLinePos + 1);
    }
    return 0;
}