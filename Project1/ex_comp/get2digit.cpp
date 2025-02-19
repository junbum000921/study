// example1.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 1. 두 정수와 문자를 입력받아 출력
    int n1, n2;
    char c;
    printf("정수 두개와 문자 하나 입력\n");
    scanf("%d%d %c", &n1, &n2, &c);
    printf("%d %d %c\n", n1, n2, c);

    return 0;
}