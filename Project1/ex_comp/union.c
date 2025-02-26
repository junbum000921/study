#include <stdio.h>

typedef struct{
    int x;
    int y;
}point;


typedef union{
    int n;
    char a[4];
}UnionExample;



int main(int argc, char const *argv[])
{
    int n = 0x0a040e03;
    char* p =(char*) &n;
    printf("n = %X\n",n);
    printf("p[0] = %02x, p[1] = %02x, p[2] = %02x, p[3] = %02x\n", p[0], p[1], p[2], p[3]);
    UnionExample u2 = {0x0a040e03};
    printf("u2.c : %X\n",u2.n);
    printf("u2.a[0] = %02x, u2.a[1] = %02x, u2.a[2] = %02x, u2.a[3] = %02x\n", u2.a[0], u2.a[1], u2.a[2], u2.a[3]);
    return 0;
}
