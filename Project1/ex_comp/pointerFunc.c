#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>

void func(int* p){
    printf("p's address: %p\n", p);
}

int main(void){
    int a=10;
    int* add=&a;
    func(add);
}