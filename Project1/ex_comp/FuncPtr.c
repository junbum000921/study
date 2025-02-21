#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}  

int main(){
    int (*calc)(int a, int b);
    
    calc = add;
    int result = calc(3, 2);
    printf("result: %d\n", result);
    calc = sub;
    result = calc(3, 2);
    printf("result: %d\n", result);
    return 0;
}