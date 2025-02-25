#include <string.h>
#include <stdio.h>

int main(){
    int n1= 1;
    int n2= 2;
    int n3= -10;
    int n4= 10;
    printf("%d and %d = %d\n",n1, n2, memcmp(&n1, &n2, sizeof(int)));
    printf("%d and %d = %d\n",n1, n3, memcmp(&n1, &n3, sizeof(int)));
    printf("%d and %d = %d\n",n1, n4, memcmp(&n1, &n4, sizeof(int)));
    printf("%d and %d = %d\n",n3, n4, memcmp(&n4, &n2, sizeof(int)));
}