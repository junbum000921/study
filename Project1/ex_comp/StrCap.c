#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    const char* str1 = "Hello world!";
    const char* str2 = "Hello world!";
    const char* str3 = "Hello ";

    printf("Comparing %s and %s : %d\n",str1, str2 ,strcmp(str1,str2));
    printf("Comparing %s and %s : %d\n",str2, str1 ,strcmp(str2,str1));
    printf("Comparing %s and %s : %d\n",str3, str1 ,strcmp(str3,str1));
    int len3 = strlen(str3);
    printf("Comparing %s and %s up to %d: %d\n",str3, str1 ,len3,strncmp(str3,str1, len3));
    return 0;

}