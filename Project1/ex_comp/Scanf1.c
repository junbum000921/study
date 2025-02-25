#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(){
    char subject[20];
    int midterm;
    int final;
    printf("과목명, 중간 ,기말순으로 입력\n");
    scanf("%[^,],%d,%d", subject, &midterm, &final);
    printf("subject = %s, midterm = %d, final = %d\n", subject, midterm, final);
    return 0;
}