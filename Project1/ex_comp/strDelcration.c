#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char str1[] = {'A', 'B', 'C', 'D', 'E', '\0'};
    char str2[14] = {'A', 'B', 'C', 'D', 'E', '\0'};
    char str3[] = "ABCDE";
    char str4[14] = "ABCDE";
    char* str5 = "Hello, world";

    printf("sizeof(str1) = %d, str1: %s\n", sizeof(str1)/sizeof(char),str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);
    printf("sizeof(str5) : %d, str5: %s\n", sizeof(str5),str5);
    str5 = "XYZ";
    printf("str5: %s\n", str5);
    str1[0] = 'P';
    printf("str5: %s\n", str1);
    return 0;

}