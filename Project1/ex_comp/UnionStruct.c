#include <stdio.h>

typedef struct{
    int n;
    union{
        double d;
        float f;
        int n;
    }value;    
}UnionStruct;



int main(int argc, char const *argv[])
{
    UnionStruct us = {1,3};
    printf("n : %d, union : %f, %f, %d",us.n,us.value.d,us.value.f,us.value.n);
    return 0;
}
