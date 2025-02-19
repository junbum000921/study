// example13.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 13. 변수의 범위(scope) 예제
    int x = 7;
    printf("%d\n", x);
    for (int i = 0; i < 2; i++) {
        printf("%d\n", x);
        int x = 9;
    }
    printf("%d\n", x);

    return 0;
}