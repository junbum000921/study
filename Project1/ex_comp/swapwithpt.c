// example11.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    // 11. 포인터를 사용한 swap 함수 예제
    int x = 5;
    int y = 9;
    int* xp = &x;
    int* yp = &y;
    swap(xp, yp);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}