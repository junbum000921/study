#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void omni_add(void* a, void* b){
    double* pa = (double*) a;
    double* pb = (double*) b;
    printf("result: %.1f\n", *pa + *pb);   
}

int main(){
    int x1 = 1;
    int y1 = 3;
    double x2 = 1.1;
    double y2 = 3.3;
    void* px1 = &x1;
    void* py1 = &y1;
    void* px2 = &x2;
    void* py2 = &y2;
    omni_add(px1, py1); 
    omni_add(px2, py2); 
    return 0;
}