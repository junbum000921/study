#include <stddef.h>//define NULL
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n=3;
    int* nPtr = &n;
    unsigned int* n2Ptr = (unsigned int*)nPtr;//형변환 연산자를 이용하여 nPtr의 주소값을 unsigned int형으로 변환
    printf("nPtr's address: %p\n", nPtr);
    printf("n2Ptr's address: %p\n", n2Ptr);
    printf("n's value: %d\n", n);
    return 0;
}