#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse_array(int* arr, int size){
    int temp;
    for(int i=0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
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
    reverse_array(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}