#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[20];
    int x;
    int y;
} Point;

int main(void)
{
    Point points[] = { { "x1", 20, 30 }, { "y1", 40, 50 } };
    Point* ptrPoints = points;

    printf("points[0]: name: %s, x = %d, y = %d\n", ptrPoints->name, (*ptrPoints).x, ptrPoints->y);
    ptrPoints++;
    printf("points[1]: name: %s, x = %d, y = %d\n", ptrPoints->name, (*ptrPoints).x, ptrPoints->y);
    
    return 0;
}