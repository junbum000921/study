#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE(arr, element)(sizeof(arr)/sizeof(element))
#define SIZE 2

typedef struct{int x; int y;}pt;


typedef struct {
    char name[20];
    pt pt1;
    pt pt2;
} Rectangle;

/*void printPoint(const Point* p, int size){
    for(int i=0; i<size; i++){
        printf("Point: name : %s, x : %d, y : %d\n", p->name, p->x, p->y);
    }
    
}*/

int main(void)
{
    Rectangle r[] = {{"Rectangle 1",{10,20}, {100,200}},{"Rectangle 2",{30,40},{300,400}}};
    Rectangle* ptr = r;
    printf("name : %s, x1 : %d, y1 : %d, x2 : %d, y2 : %d \n", ptr->name, ptr->pt1.x, ptr->pt1.y,ptr->pt2.x, ptr->pt2.y);
    ptr++;
    printf("name : %s, x1 : %d, y1 : %d, x2 : %d, y2 : %d \n", ptr->name, ptr->pt1.x, ptr->pt1.y,ptr->pt2.x, ptr->pt2.y);
   
    
    return 0;
}