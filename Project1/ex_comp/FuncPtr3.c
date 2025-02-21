#include <stdio.h>

typedef int (*CALC)(int a, int b);

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
void calculator(CALC c, int a, int b){
    int result = c(a, b);
    printf("result: %d\n", result);
}

int main(){
    int x=1;
    int y=2;
    calculator(add, x, y);
    calculator(sub, x, y);
    return 0;
}