// example2.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 2. 두 정수와 문자를 입력받아 출력 (다른 형식)
    int n1, n2, n3;
    scanf("%d-%d-%d", &n1, &n2, &n3);
    printf("n1 : %03d, n2 : %04d, n3 : %04d\n", n1, n2, n3);

    return 0;
}