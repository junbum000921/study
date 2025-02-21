#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArr(const int* parr, int size){    
    for (int i = 0; i < size; i++){
        printf("%d ", parr[i]);
    }
    printf("\n");
}

void changeArr(int* parr, int idx, int newval){
    parr[idx]=newval;
}

int main(){
    int arr[]={1,2,3,4,5};
    changeArr(arr, 2, 3*3);
    changeArr(arr, 4, 4*4);
    printArr(arr, 5);
    return 0;
}