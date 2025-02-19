#include    <stdio.h>
#include    <stdlib.h> 
#include    <string.h>
#define _CRT_SECURE_NO_WARNINGS

void printChars(const char c[],int size){
    // 문자열의 각 문자를 출력
    for(int i=0; i<size; i++){
        printf("%c", c[i]);
    }
    printf("\n");
}
void getAndPrintChars(int n){
    // 문자열을 입력받아 출력
    char chars[n];
    int count=0;
    do{
        printf("Enter a character: ");
        scanf("%c", &chars[count]);
        getchar();
        count++;
    }while(chars[count-1]!='0' && count<n);
    printChars(chars, count);
}
int main (void){
    char str1[10] = "Hello";
    printChars(str1, 5);
    int n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);
    getchar();
    getAndPrintChars(n);
    return 0;
}