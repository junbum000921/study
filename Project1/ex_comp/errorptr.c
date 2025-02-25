#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(){
    char* p;
    errno = 0;
    double d = strtod("3.1415", &p);
    printf("d = %f, *p = %c, errno = %d, ERANGE = %d\n", d, *p, errno, ERANGE);
    d = strtod("3.1415E400", &p);
    printf("d = %f, *p = %c, errno = %d, ERANGE = %d\n", d, *p, errno, ERANGE);
    long l = strtol("134134132L", &p, 10);
    printf("l = %ld, *p = %c, errno = %d, ERANGE = %d\n", l, *p, errno, ERANGE);
    l = strtol("16532156165231651L", &p, 10);
    printf("l = %ld, *p = %c, errno = %d, ERANGE = %d\n", l, *p, errno, ERANGE);
    unsigned long ul = strtoul("613213435UL", &p, 10);
    printf("l = %lu, *p = %c, errno = %d, ERANGE = %d\n", ul, *p, errno, ERANGE);
    ul = strtoul("1616846554618764654UL", &p, 10);
    printf("l = %lu, *p = %c, errno = %d, ERANGE = %d\n", ul, *p, errno, ERANGE);
    return 0;
}