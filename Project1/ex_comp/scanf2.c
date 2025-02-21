#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readTwoInts(int* px, int* py){

    printf("Enter two integers: ");
    scanf("%d %d", px, py);


}
int main(){
    int x=0;
    int y=0;
    readTwoInts(&x, &y);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}