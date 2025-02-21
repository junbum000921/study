#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef void (*FuncPtr)(void* p);

void doSomething(FuncPtr f, void* p){
    f(p);
}

void printDouble(void* p){
    double* ptr = (double*)p;
    printf("double: %f\n", *ptr);
}

void printInt(void* p){
    int* ptr = (int*)p;
    printf("int: %d\n", *ptr);
}

int main(){
    double d = 3.14;
    int n = 3;

    doSomething(printDouble, &d);
    doSomething(printInt, &n);
    return 0;
}
