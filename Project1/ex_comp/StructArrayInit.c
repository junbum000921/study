#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE(arr, element)(sizeof(arr)/sizeof(element))
#define SIZE 2

typedef struct {
    char name[20];
    int x;
    int y;
} Point;

void printPoint(const Point* p, int size){
    for(int i=0; i<size; i++){
        printf("Point: name : %s, x : %d, y : %d\n", p->name, p->x, p->y);
    }
    
}

int main(void)
{
    Point p[SIZE]={{"x1",10,20},{"y1",30,40}};
    Point *pt = p;
    printPoint(pt,2);
    
    
    return 0;
}