#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Hash2.c"
#define ARRAY_SIZE(arr, element) (sizeof(arr)/sizeof(element))


int main(void){
    char* strs[] = {"Hello", "My", "name","is","junbum", "nice","to","meet", "you"};
    initHashFunction(3, 47);
    for(int i=0; i<ARRAY_SIZE(strs, strs[0]); i++){
        printf("str = %s, hashvalue = %d\n",strs[i], getHashValue(strs[i]));
    }
    //destroyhashfunction();
    return 0;
}