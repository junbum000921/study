#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char str[] = "Hello";
    char* pstr = "hello";

    printf("str: %s\n", str);
    str[3] = 'p';
    str[4]='\0';
    printf("str: %s\n", str);

    printf("pstr: %s\n", pstr);
    //pstr[3] = 'p'; //error
    //pstr[4] = '\0'; //error
    printf("pstr: %s\n", pstr);
    return 0;
}