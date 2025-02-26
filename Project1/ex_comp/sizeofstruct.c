#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct{
    
    int x;
    double d;
    char c1;
    char c2;
    
}st1;

typedef struct{
    char c1;
    char c2;
    int x;
    double d;
}st2;

int main(){
    printf("size of st1 : %zu\n",sizeof(st1));
    printf("size of st2 : %zu\n",sizeof(st2));
    return 0;
}