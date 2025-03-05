#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int hashBase;
int hashSize;

void initHashFunction(int base, int size){
    hashBase = base;
    hashSize = size;
}

unsigned getHashValue(const char* str){
    double sum =0 ;
    for(int i=strlen(str)-1; i>=0; i--){
        sum += pow(hashBase, i);
    }
    unsigned value = ((unsigned) sum) % hashSize;
    printf("hash value = %u\n", value);
    return value;
}
