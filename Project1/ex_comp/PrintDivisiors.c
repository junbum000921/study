#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 100

void printArrayElements(const int arr[], int size){
    // 배열의 요소를 출력
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int findDivisors(int n, int divisors[], int size){
    // n의 약수를 찾아 divisors에 저장
    int count=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            if(count<size){
                divisors[count]=i;
                count++;
            }
            else{
                return 0;
            }
        }
    }
    return count;
}

int main(void){
    int divisors[SIZE];
    int count=0;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    count = findDivisors(n, divisors, SIZE);
    if(count==0){
        printf("Found %d divisors. There is no space in the divisor\n", SIZE);
    }
    printArrayElements(divisors, count);
    return 0;
}