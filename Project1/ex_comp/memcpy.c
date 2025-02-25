#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void calcAndPrintSum(int a[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=a[i];
    }
    printf("sum : %d\n",sum);
}

void initArray(int a[], int size){
    for(int i=0; i<size; i++){
        a[i] = i+1;
    }
}


int main(){
    int arr[SIZE+50];

    initArray(arr,SIZE);
    calcAndPrintSum(arr, SIZE);

    printf("Test memcpy()\n");
    memcpy(arr + 50, arr, sizeof(int) * SIZE);
    calcAndPrintSum(arr + 50, SIZE);
    calcAndPrintSum(arr, SIZE);
    initArray(arr, SIZE);

    printf("Test memmove()\n");
    memmove(arr + 50, arr, sizeof(int)*SIZE);
    calcAndPrintSum(arr + 50, SIZE);
    return 0;
}