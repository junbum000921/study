#include <stddef.h>//define NULL
#include <stdio.h>

int main(void){
    int n=0x0A0B0C0D;
    int* ptr1 = &n;
    char* ptr2 = (char*)ptr1;
    for(int i=0; i<sizeof(int); i++){
        printf("%02X\n",ptr2[i]);
    }
    return 0;
}