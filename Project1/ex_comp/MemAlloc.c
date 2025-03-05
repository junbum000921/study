#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
    int* pInt = (int*) malloc(sizeof(int));
    *pInt = 4;
    printf("%d\n", *pInt);
    free(pInt);
    return 0;
}