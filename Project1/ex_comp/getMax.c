#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getmax(int* arr, int size){
    int max = 0;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
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
    printf("Max of elements: %d\n", getmax(arr, n));
    return 0;

}