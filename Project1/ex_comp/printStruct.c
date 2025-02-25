#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _Address {
    struct _Address* next;  // struct 태그_이름 형태로 사용함에 주의
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
    Address addr1 = { NULL, "Hong gildong", "010-1111-1111", "hong@mail.net", "Hongjimun-gil 10, Jongno-gu, Seoul" };
    Point p1 = { "x1", 20, 30 };
    Point p2 = { "y1", 40, 50 };
    
    printf("Name: %s, CellPhone: %s, E-mail: %s, Address: %s\n", 
           addr1.name, addr1.cellPhoneNumber, addr1.email, addr1.address);
    printf("p1: name: %s, x : %d, y: %d\n", p1.name, p1.x, p1.y);
    printf("p2: name: %s, x : %d, y: %d\n", p2.name, p2.x, p2.y);
    return 0;
}