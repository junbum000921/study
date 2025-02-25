#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(){
    char str[50];
    snprintf(str, sizeof(str), "%s, %d, %d", "C Programming", 90, 86);
    printf("str = %s\n", str);
    
}