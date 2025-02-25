#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct{
    int x;
    int y;
}GlobalPoint;

void f(void){
    typedef struct{
        int x;
        int y;
    }LocalPoint;
    LocalPoint p = {2,3};
}

int main(){
    GlobalPoint p = {3,5};
    return 0;
}