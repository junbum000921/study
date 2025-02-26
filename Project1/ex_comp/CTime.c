#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>



void printTm(const struct tm* p)
{
    printf("tm_sec: %d\n", p->tm_sec);         
    printf("tm_min: %d\n", p->tm_min);              
    printf("tm_hour: %d\n", p->tm_hour);        
    printf("tm_mday: %d\n", p->tm_mday);       
    printf("tm_mon: %d\n", p->tm_mon + 1);     
    printf("tm_year: %d\n", p->tm_year + 1900); 
    printf("tm_wday: %d\n", p->tm_wday);        
}

int main(void)
{
    time_t t = time(NULL);
    struct tm* p = gmtime(&t);
    printf("gmtime()'s result\n");
    printTm(p);
    p = localtime(&t);
    printf("localtime()'s result\n");
    printTm(p);
    return 0;
}