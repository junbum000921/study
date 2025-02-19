// example4.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 4. getc()와 putc() 사용 예제
    int ch = getc(stdin);
    printf("%c\n", ch);
    ch = getc(stdin);
    printf("%c\n", ch);

    return 0;
}