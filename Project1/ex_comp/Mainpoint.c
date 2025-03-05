#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Point.h"
#include "InitPoint.h"

int main(){
    Point p1;
    Point p2;

    initPoint(&p1, 10, 10);
    initPoint(&p2, 20, 20);
    printf("%d %d %d %d", p1.x, p1.y, p2.x, p2.y);
    return 0;
}