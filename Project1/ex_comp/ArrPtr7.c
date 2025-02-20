#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int arr[] = {0, 1, 2, 3};
    int*p1 = &arr[3];
    for (int i = 3; i >0; i--, p1--){
        printf("p1's address: %p\n", p1);
        printf("p1's value: %d\n", *p1);
        printf("arr[%d]: %d\n", i, arr[i]);
        printf("arr[%d]'s address: %p\n", i, &arr[i]);
        
    }
}