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

#define ARRAY_SIZE(arr, element) (sizeof(arr)/sizeof(element))

int main(void){
    char* strs[] = {"Hello", "My", "name","is","junbum", "nice","to","meet", "you"};
    initHashFunction(3, 47);
    for(int i=0; i<ARRAY_SIZE(strs, strs[0]); i++){
        printf("str = %s, hashvalue = %d\n",strs[i], getHashValue(strs[i]));
    }
    return 0;
}