#define _CRTT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(){
    char s[SIZE];
    fgets(s, SIZE, stdin);
    if(s[strlen(s)-1]=='\n'){
        printf("newline char is included in s.\n");
    }
    printf("s = %s",s);
    return 0;
}