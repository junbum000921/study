#include <stdio.h>
#include <stdbool.h>
#define SIZE 4
int arr[SIZE]={1,10,6,9};
int* getFirstElementGreaterThan(int n){
    for (int i = 0; i < SIZE; i++){
        if (arr[i]>n)
            return &arr[i];//포인터로 반환함.
    }
    return NULL;
}

int main(){
    
    int* p=getFirstElementGreaterThan(2);
    if(p!=NULL){
        printf("First element greater than 2: %d\n", *p);
    }
    else{
        printf("No element greater than 2\n");
    }
    return 0;
}


