#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _Address {
    struct _Address* next;  
    char name[30];
    char cellPhoneNumber[20]; 
    char email[30];
    char address[100];
} Address;

typedef struct {
    char name[20];
    int x;
    int y;
} Point;

int main(void)
{
    Point p1 = { "x1", 20, 30 };
    Point p2 = { "y1", 40, 50 };
    
    Address addr1;
    Address addr2 = { NULL, "Hong gildong", "010-1111-1111", "hong@mail.net", "Hongjimun-gil 10, Jongno-gu, Seoul" };
    
    p2 = p1;
    addr1 = addr2;
    
    printf("Name: %s, CellPhone: %s, E-mail: %s, Address: %s\n", addr1.name, addr1.cellPhoneNumber, addr1.email, addr1.address);   
    printf("p2: name: %s, x : %d, y: %d\n", p2.name, p2.x, p2.y);
    return 0;    
}