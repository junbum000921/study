// example8.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 8. 정수 입력 및 짝수/홀수 판별
    int n;
    printf("정수 하나 입력.\n");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d는 짝수입니다.\n", n);
    } else {
        printf("%d는 홀수입니다.\n", n);
    }

    return 0;
}