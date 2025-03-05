#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MUL(x,y) (x*y)
#define str(a) #a
#define printmul(x,y) printf("%d * %d = %d\n",x,y,MUL(x,y));
#define XN(n) x ## n
int main(){
    int x=3;
    int y=3;
    int x1=10;
    int x2=20;
    printf(str(x) "\n");
    printf(str(y) "\n");
    printf("x * y = %d\n",MUL(x,y));
    printmul(x,y);
    printf("Before %d %d\n", x1,x2);
    XN(1) = XN(2);
    printf("After %d %d",x1,x2);
    return 0;
}