#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}

typedef int (*CALC)(int a, int b);

int main(){
    CALC c1 = add;
    CALC c2 = sub;
    int result = c1(3, 2);
    printf("result: %d\n", result);
    result = c2(3, 2);
    printf("result: %d\n", result);

    return 0;
}
