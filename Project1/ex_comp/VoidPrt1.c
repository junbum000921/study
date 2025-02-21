#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printAddress(void* p){
    printf("address: %p\n", p);
}

int main(){
    int n=3;
    double d=3.14;

    int* pn = &n;
    double* pd = &d;

    void* p = pn;
    pn = (int*)p;

    printAddress(pn);
    printAddress(pd);
}