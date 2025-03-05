#include <stdio.h>

typedef union{
    unsigned color;
    struct{
        unsigned red:8;
        unsigned green:8;
        unsigned blue:8;
        unsigned t:8;
    }bitColor;
}Colorunion;

int main(){
    Colorunion c;
    c.bitColor.red = 255;
    c.bitColor.green = 175;
    c.bitColor.blue = 234;
    c.bitColor.t = 0;

    printf("c.bitcolor : %08x, c.bitcolor.red : %x, c.bitcolor.green : %x, c.bitcolor.blue : %x, c.bitcolor.t : %x\n",
        c.bitColor,c.bitColor.red,c.bitColor.green,c.bitColor.blue,c.bitColor.t);
    return 0;
}
