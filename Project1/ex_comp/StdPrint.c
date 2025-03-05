#define _CRTT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(){
    char s[SIZE];
    fgets(s, SIZE, stdin);
    if(s[strlen(s)-1]=='\n'){
        fprintf(stderr,"newline char is included in s.\n");
    }
    fprintf(stdout,"fprintf(): s= %s",s);
    printf("printf(): s = %s",s);
    return 0;
}