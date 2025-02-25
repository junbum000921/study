#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    char dest[] = "abcdefghijklmnopqrsvtuwxyz";
    const char* src = "Hello, world!";

    strncpy(dest, src, 5);
    printf("dest = %s\n",dest);
    strncpy(dest, src, 13);
    printf("dest = %s\n",dest);
    return 0;
}