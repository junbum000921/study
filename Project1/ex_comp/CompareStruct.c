#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct {
    char name[20];
    int x;
    int y;
} Point;

int main(void)
{
    // 콘솔을 UTF-8 인코딩으로 설정
    SetConsoleOutputCP(CP_UTF8);

    Point p1 = { "x1", 2, 3 };
    Point p2 = { "y1", 2, 3 };

    strcpy(p3.name, "abcdefghijiklmn");
    strcpy(p3.name, "x1");
    p3.x = 2;
    p3.y = 3;

    if (strcmp(p1.name, p2.name) == 0 && p1.x == p2.x && p1.y == p2.y) {
        printf("p1와 p2는 같습니다\n");
    }
    else {
        printf("p1와 p2는 다릅니다\n");
    }
    if (strcmp(p1.name, p3.name) == 0 && p1.x == p3.x && p1.y == p3.y) {
        printf("p1와 p3는 같습니다\n");
    }
    else {
        printf("p1와 p3는 다릅니다\n");
    }
    if (memcmp(&p1, &p3, sizeof(Point)) == 0) {
        printf("memcmp() 함수 결과: p1와 p3는 같습니다\n");
    }
    else {
        printf("memcmp() 함수 결과: p1와 p3는 다릅니다\n");
    }
    return 0;
}