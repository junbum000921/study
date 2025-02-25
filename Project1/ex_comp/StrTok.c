#include <string.h>
#include <stdio.h>

int main(){
    char str[] = "C is a general programming language";
    char* token = strtok(str, " ");
    while (token != NULL){
        printf("token = %s\n", token);
        token = strtok(NULL, " \t\n");
    }
    return 0;4  5
}