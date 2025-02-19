#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 5
void print2DArray(int arr[ROW][COL], int row, int col){
    // 2차원 배열의 요소를 출력
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main(void){
    int arr2D[ROW][COL] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    print2DArray(arr2D, ROW, COL);
    return 0;
}