// example6.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 6. enum과 조건문 사용 예제
    typedef enum Membership { NONE, SILVER, GOLD, PLATINUM } Membership;
    Membership membership = GOLD;
    int time = 30;
    int free = (membership == GOLD || membership == PLATINUM) && (time < 120);
    printf("무료인가요? : %d\n", free);

    return 0;
}