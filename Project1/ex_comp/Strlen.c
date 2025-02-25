#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){

    char str1[] = "hello, world!";

    printf("length of str1 : %d\n",strlen(str1));
    char str2[] = "\0";
    printf("length of str2 : %d\n",strlen(str2));
    return 0;
}