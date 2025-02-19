// example10.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 10. 문자 입력 및 유효성 검사
    char ch;
    char newlinchar;
    int first = 1;
    do {
        if (first) {
            printf("문자 입력 : ");
            first = 0;
        } else {
            printf("문자가 아닙니다. 다시 입력해 주세요.\n");
        }
        scanf("%c", &ch);
        scanf("%c", &newlinchar);
    } while ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z'));
    printf("ch = %c\n", ch);

    return 0;
}