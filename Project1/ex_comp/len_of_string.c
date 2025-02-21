#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int string_lenght(char* str){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;

}

int main(){
    char* str;
    printf("Enter a string: ");
    scanf("%s", str);\\띄어쓰기가 있으면 띄어쓰기까지만 입력받음
    printf("%d\n",sizeof(str));
    printf("%s\n", str);
    printf("The length of the string is: %d\n", string_lenght(str));
}