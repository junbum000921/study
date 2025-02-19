#include <stdio.h>
#include <stdlib.h>

#define DEPTH 3
#define ROW 3
#define COL 5

void print3DArray(int arr[DEPTH][ROW][COL], int depth, int row, int col){
    for(int i=0; i<depth; i++){
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++){
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main(void){
    int cnt=1;
    int arr3D[DEPTH][ROW][COL];
    for(int i=0; i<DEPTH; i++){
        for(int j=0; j<ROW; j++){
            for(int k=0; k<COL; k++){
                arr3D[i][j][k]=cnt;
                cnt++;
            }
        }
    }
    print3DArray(arr3D, DEPTH, ROW, COL);
    return 0;
}