#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char* fileName = "intDouble.data";
    double d = 0.0;
	int n;
    
    FILE* fr = fopen(fileName, "rb");
    fseek(fr, sizeof(int), SEEK_SET);
    fread(&d, sizeof(double), 1, fr);
    fseek(fr, sizeof(int) * 4, SEEK_CUR);    
    fread(&n, sizeof(int), 1, fr);
    fclose(fr);
    printf("d = %f, nums[4] = %d\n", d, n);
    return 0;
}