#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "StructVar1.c"

extern Point p1;
extern Point p2;



int main(){
    p1.x=3;
    p1.y=4;
    p2.x=5;
    p2.y=6;
    printf("p1.x = %d, p1.y = %d, p2.x = %d, p2.y = %d",p1.x,p1.y,p2.x,p2.y);
}