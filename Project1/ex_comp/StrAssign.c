#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    char str[]="hello";
    char str2[1];

    printf("str: %s\n", str);
    printf("str2's len : %d\n", strlen(str2));
    strcpy(str2, str);
    printf("str2: %s\n", str2);
    printf("str2's len : %d\n", strlen(str2));
    return 0;
}