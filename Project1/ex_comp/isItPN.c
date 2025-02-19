// example12.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrimeNumber(int m) {
    if (m < 2) {
        return 0;
    } else if (m == 2) {
        return 1;
    } else if (m % 2 == 0) {
        return 0;
    }
    for (int i = 3; i < m; i += 2) {
        if (m % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    // 12. 소수 판별 함수 사용 예제
    int n;
    scanf("%d", &n);
    int ans = isPrimeNumber(n);
    if (ans == 1) {
        printf("%d는 소수입니다.\n", n);
    } else {
        printf("%d는 소수가 아닙니다.\n", n);
    }

    return 0;
}