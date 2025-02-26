#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void setTmStruct(struct tm* ptm, int year, int month, int day, int hour, int min, int sec)
{
    if (ptm != NULL) {
        ptm->tm_year = year - 1900; // 연도를 1900부터 계산하기 때문에 조정
        ptm->tm_mon = month - 1;    // 월을 0부터 계산하기 때문에 조정
        ptm->tm_mday = day;
        ptm->tm_hour = hour;
        ptm->tm_min = min;
        ptm->tm_sec = sec;
        ptm->tm_isdst = 0;          // 서머타임 비활성화
    }
}

void printTm(const struct tm* p)
{
    printf("tm_sec: %d\n", p->tm_sec);          // 초
    printf("tm_min: %d\n", p->tm_min);          // 분    
    printf("tm_hour: %d\n", p->tm_hour);        // 시
    printf("tm_mday: %d\n", p->tm_mday);        // 일
    printf("tm_mon: %d\n", p->tm_mon + 1);      // 월
    printf("tm_year: %d\n", p->tm_year + 1900); // 연도
    printf("tm_wday: %d\n", p->tm_wday);        // 요일
}

int main(void)
{
    struct tm tm1;
    
    setTmStruct(&tm1, 2023, 9, 20, 20, 10, 15); // 2023년 9월 20일 20시 10분 15초
    time_t t = mktime(&tm1);
    struct tm* p = localtime(&t);
    printf("localtime()\n");
    printTm(p);
    return 0;
}
