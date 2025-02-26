#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct{
    int x;
    int y;
}point;

typedef union{
    int n;
    char a[4];
}UnionExample;

int main(void){
    UnionExample u1;
    u1.n=32823123;
    UnionExample* pu = &u1;
    printf("pu->n : %d\n",pu->n);
    return 0;
}