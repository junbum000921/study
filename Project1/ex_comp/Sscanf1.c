#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(){
    char str[] = "CProgramming 90 86";
    char subject[20];
    int mid;
    int final;

    int converted = sscanf(str, "%s %d %d", subject, &mid, &final);
    printf("subject = %s, mid = %d, final = %d, converted = %d\n", subject, mid, final, converted);
    return 0;
}