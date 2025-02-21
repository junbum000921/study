#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getSum(int* arr, int size){
    int sum=0;
    for (int i = 0; i < size; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int arr[4]={1,2,3,4};
    int sum = getSum(arr, 4);
    printf("sum: %d\n", sum);
    return 0;

}