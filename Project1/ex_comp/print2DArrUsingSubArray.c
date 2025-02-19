#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 5

void print2DArray2(const int arr[], int c){
    for(int i=0; i<c; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

int main(void){
    int arr2D[ROW][COL] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    for(int i=0; i<ROW; i++){
        print2DArray2(arr2D[i], COL);
        printf("\n");
    }
    return 0;
}