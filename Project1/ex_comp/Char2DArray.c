#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

#define AS(arr, element) (sizeof(arr)/sizeof(element))

void printStrArray(char strs[][10], int size){
    for (int i=0; i<size; i++){
        printf("strs[%d] = %s\n",i, strs[i]);
    }
}

int main(){
    char animals[][10] = {"Dog", "Cat", "Raccon", "Duck", "Iguana"};
    printStrArray(animals, AS(animals, animals[0]));
    return 0;
}6