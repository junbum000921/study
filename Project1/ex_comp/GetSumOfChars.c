#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getSumOfChars(char* str){
    int sum=0;
    char* p =str;

    while(*p!='\0'){
        sum+=*p;
        p++;
    }
    return sum;
}

int main(){
    char str[]={'h','e','l','l','o','\0'};
    int sum = getSumOfChars(str);
    printf("sum: %d\n", sum);
    return 0;
}