#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    char phoneNum[12]; // 00000000000 '-' 없이 전화번호 표현
} PhoneNumber;

void printData(int* pInt, int numInt, double* pArr, int numDbl, PhoneNumber* pPhones, int numPhones)
{
    for (int i = 0; i < numInt; i++) {
        printf("*pInt = %d ", pInt[i]);
    }    
    printf("\n");
    for (int i = 0; i < numDbl; i++) {
        printf("pArr[%d] = %g ", i, pArr[i]);
    }    
    printf("\n");
    for (int i = 0; i < numPhones; i++) {
        printf("Name: %s\n", pPhones[i].name);
        printf("PhoneNumber: %s\n", pPhones[i].phoneNum);
    }
}

void* calloc(size_t count, size_t size){
    void* p = malloc(count*size);
    memset(p,0,count*size);
    return 0;
}