#include <stddef.h>//define NULL
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr[]={10,51,3,98,9};
    int* p1=&arr[1];
    int* p2=p1 + 2;
    int* p3=p1 - 1;
    printf("p1: %d\n", *p1);
    printf("p2: %d\n", *p2);
    printf("p3: %d\n", *p3);



    double darr[]={1.1, 2.2, 3.3, 4.4, 5.5};
    double* dp1=&darr[1];
    double* dp2=dp1 + 1;
    double* dp3=dp1 - 1;
    printf("dp1: %f\n", *dp1);
    printf("dp2: %p\n", dp2);
    printf("dp3: %p\n", dp3);
    printf("dp1-dp2: %td\n", dp1-dp2);
    return 0;
}