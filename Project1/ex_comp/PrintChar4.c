#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>

void printCharsInStr(const char* pstr){
    for (const char* p = pstr; *p != '\0'; p++){
        printf("%c\t", *p);
    }
}

int main(){
    char str[] = "Hello, world!";
    printCharsInStr(str);
    return 0;
}