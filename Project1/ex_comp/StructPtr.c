#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>

typeof struct{
    int size;
    double arr[1000000];
}LARGE_DATA;

void func(LARGE_DATA d){}
void func2(LARGE_DATA* pd){}

int main(void){
    LARGE_DATA data;
    func(data);
    func2(&data);
    return 0;
}