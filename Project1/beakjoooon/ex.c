#include <stdio.h>
#include <stdlib.h>
int getPrimeNumber(int n){
    int start=n+1;
    while(1){
        int isPrime=1;
        for(int i=2; i<start; i++){
            if(start%i==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            return start;
        }
        start++;
    }
    return start;
}

int main(void){
    int n;
    scanf("%d", &n);
    int arr[50];
    arr[0]=1;
    arr[1]=2;
    for(int i=2; i<n-1; i++){
        arr[i]=i+1;
    }
    arr[n-1]=getPrimeNumber(arr[n-2]);
    printf("%d\n", n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}