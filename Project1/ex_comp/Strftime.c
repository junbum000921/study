#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

#define SIZE 100

int main(){
    time_t t = time(NULL);
    struct tm* p = localtime(&t);
    char timeStr[SIZE];
    int len = strftime(timeStr, SIZE, "%Y-%m-%d:%I-%M-%S %p",p);
    printf("len = %d, timeStr = %s\n", len, timeStr);
    return 0;
}