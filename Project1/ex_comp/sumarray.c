#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_Array(int* arr, int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    
    printf("Number of elements:");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the element:");
        scanf("%d", &arr[i]);
    }
    printf("Sum of elements: %d\n", sum_Array(arr, n));
    return 0;
}