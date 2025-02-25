#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int num[]={'c','d','e','f','g'};
    void* p = memchr(num, 'f', sizeof(num));
    if(p){
        printf("p = %p\n",p);
        printf("num[3] = %p\n", &num[3]);
    }
}