#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE(arr, element)(sizeof(arr)/sizeof(element))

int main(void){
    char str[] = "Hello";

    for(char* p = str;*p != '\0'; p++){
        printf("%c\t", *p);
    }
    return 0;
}