#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 10

int main(void)
{
    char* fileName = "intDouble.txt";
    int n = 23232923;
    double d = 2.3E20;
    int nums[SIZE] = { 1, 101, 102, 103, 104, 105, 106, 107, 108, 109 };
    
    // 쓰기
    FILE* fw = fopen(fileName, "wb");
    fwrite(&n, sizeof(int), 1, fw);
    fwrite(&d, sizeof(double), 1, fw);
    fwrite(nums, sizeof(int), 10, fw);
    fclose(fw);
    
    // 변수 초기화
    n = 0;
    d = 0.0;
    memset(nums, 0, sizeof(int) * SIZE);
    
    // 읽기
    FILE* fr = fopen(fileName, "rb");
    fread(&n, sizeof(int), 1, fr);
    fread(&d, sizeof(double), 1, fr);
    fread(nums, sizeof(int), SIZE, fr);
    fclose(fr);    
    
    // 출력
    printf("n = %d, d = %f\n", n, d);
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}