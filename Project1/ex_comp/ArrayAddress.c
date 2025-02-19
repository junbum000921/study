#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArrAddr(int arr[]){
    // 배열 포인터의 주소를 출력
    printf("arr : %p\n", arr);
    // 배열 요소의 주소를 출력
    printf("&arr[0] : %p\n", &arr[0]);
    printf("&arr[1] : %p\n", &arr[1]);
    printf("&arr[2] : %p\n", &arr[2]);
}

int main(void){
    // 정수형 배열 선언 및 초기화
    int nums[] = {1, 2, 3, 4, 5};
    // 배열 전체의 주소를 출력
    printf("nums : %p\n", nums);
    // 배열을 함수에 전달하여 주소 출력
    printArrAddr(nums);
    return 0;
}