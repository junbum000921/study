#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int shiftArray(int arr[], int size, int n){
    int arr1[size+n];
    for(int i=0; i<size; i++){
        arr1[i+n]=arr[i];
    }
    for(int i=size-n, j=0; i<size; i++, j++){
        arr1[j]=arr[i];
    }
    for(int i=0; i<size; i++){
        arr[i]=arr1[i];
    }
    return 0;
}

void increaseArray(int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i]++;
    }
}
void printArray(const int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swapArrayElement(int arr[], int idx1, int idx2){
    int temp=arr[idx1];
    arr[idx1]=arr[idx2];
    arr[idx2]=temp;
}

int main(void){
    int nums[5]={1, 2, 3, 4, 5};
    int num2[7]={1, 2, 3, 4, 5, 6, 7};
    increaseArray(nums, 5);
    printArray(nums, 5);
    swapArrayElement(nums, 2, 4);
    printArray(nums, 5);
    shiftArray(nums, 5, 2);
    printArray(nums, 5);
    shiftArray(num2, 7, 3);
    printArray(num2, 7);
    return 0;
}