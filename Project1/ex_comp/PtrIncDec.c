#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int arr[]={0,1,2,3};
    int* p1 = &arr[1];
    printf("initial p1's address: %p\n", p1);
    p1++;
    printf("p1's address after increment: %p\n", p1++);
    printf("p1's address after increment: %p\n", p1);
    p1--;
    printf("p1's address after decrement: %p\n", p1--);

    double darr[]={0.0, 1.1, 2.2, 3.3};
    double* dp1 = &darr[1];
    printf("initial dp1's address: %p\n", dp1);
    dp1++;
    printf("dp1's address after increment: %p\n", dp1++);
    return 0;
}