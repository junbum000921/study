#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 2

typedef struct {
    char name[20];
    int x;
    int y;
} Point;

int main(void)
{
    Point points[SIZE];
    
    strcpy(points[0].name, "x1");
    points[0].x = 20;
    points[0].y = 30;
    strcpy(points[1].name, "y1");
    points[1].x = 40;
    points[1].y = 50;
    
    for (int i = 0; i < SIZE; i++) {
        printf("points[%d]: name: %s, x = %d, y = %d\n", i, points[i].name, points[i].x, points[i].y);
    }
    return 0;
}