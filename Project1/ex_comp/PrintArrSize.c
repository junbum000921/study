#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArrSize(int arr[]){
    // 배열 포인터의 크기를 출력 (배열의 크기가 아님)
    printf("sizeof(arr) : %zu\n", sizeof(arr));
    // 배열 요소의 크기를 출력
    printf("sizeof(arr[1]) : %zu\n", sizeof(arr[1]));
}

int main(void){
    // 정수형 배열 선언 및 초기화
    int nums[] = {1, 2, 3, 4, 5};
    // 배열 전체의 크기를 출력
    printf("sizeof(nums) : %zu\n", sizeof(nums));
    // 배열을 함수에 전달하여 크기 출력
    printArrSize(nums);
    return 0;
}