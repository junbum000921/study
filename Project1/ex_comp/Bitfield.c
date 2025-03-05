#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
    unsigned red: 8;
    unsigned green: 8;
    unsigned blue: 8;
    unsigned transparency: 8;
}Color;

int main(){
    Color c = {255,175,234,0};
    Color c2;
    c2.red = 255;
    c2.green = 175;
    c2.blue = 234;
    c2.transparency = 0;

    printf("c.red : %d, c.green : %d, c.blue : %d, c.transparency : %d\n",c.red, c.green, c.blue, c.transparency);
    return 0;
}