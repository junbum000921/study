#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int* constructNumArray(int n){
    int* pArr = (int*)malloc(sizeof(int)*n);
    if(pArr==NULL){
        printf("Failed to allocate memory address\n");
        return 0;
    }
   
    for(int i=0; i<n; i++){
        scanf("%d",&pArr[i]);
    }
    return pArr;
}

typedef struct{
    int sum;
    double average;
}SumAndAverage;

SumAndAverage calcSumAndAverage(int* arr, int n){
    SumAndAverage sumAvg={0,0.0};
    for(int i=0; i<n; i++){
        sumAvg.sum+=arr[i];
    }
    sumAvg.average=sumAvg.sum/n;
    return sumAvg;
}


int main(){
    int n;
    printf("N:");
    scanf("%d",&n);   
    int* pArr = constructNumArray(n);
    SumAndAverage sumAvg = calcSumAndAverage(pArr, n);
    printf("sum = %d, average = %.1f\n",sumAvg.sum, sumAvg.average);
    free(pArr);
    return 0;
}