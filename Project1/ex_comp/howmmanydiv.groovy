// example9.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 9. 정수 입력 및 약수 출력
    int divisor = 1;
    int n;
    printf("정수 입력 : ");
    scanf("%d", &n);
    if (n >= 1) {
        printf("%d의 약수는 ", n);
        do {
            if (n % divisor == 0) {
                printf("%d ", divisor);
            }
            divisor++;
        } while (divisor <= n);
        printf("입니다.\n");
    } else {
        printf("1 이상의 정수를 입력하세요. 프로그램을 종료합니다.\n");
    }

    return 0;
}