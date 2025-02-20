#include <stddef.h>//define NULL
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int* nPtr = NULL;
    int n = 10;
    printf("n's address: %p\n", &n);
    nPtr = &n;//n의 주소값을 nPtr에 저장
    printf("nPtr's address: %p\n", nPtr);
    printf("nPtr's value: %d\n", *nPtr);
    *nPtr = 20;//nPtr이 가리키는 주소에 20을 저장
    printf("n: %d\n", n);
    return 0;
}