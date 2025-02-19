#define _crt_secure_no_warnings
#include <stdio.h>

int main(void){
    int arr2[3][5]={
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    printf("arr2: %p\n", arr2);
    printf("arr2[0][0] : %p\n", &arr2[0][0]);
    printf("arr2[0][1] : %p\n", arr2[0][1]);
    printf("arr2[0][4] : %p\n", arr2[0][4]);
    printf("arr2[0] : %p\n", arr2[0]);
    printf("arr2[1] : %p\n", arr2[1]);
    printf("arr2[2][0] : %p\n", &arr2[2][0]);
    printf("arr2[2][1] : %p\n", &arr2[2][1]);
    printf("arr2[2][2] : %p\n", &arr2[2][2]);
    printf("arr2[2] : %p\n", arr2[2]);
    return 0;
}