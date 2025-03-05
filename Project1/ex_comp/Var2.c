#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Var1.c"

extern int a[3];
extern int* pa;

int main(){
    for (int i=0; i<3; i++){
        a[i]=i;
    }
    for(int i=0; i<5; i++){
        printf("a[i] = %d, pa[i] = %d\n",a[i],pa[i]);
    }
    return 0;
}