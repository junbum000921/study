#define _crt_secure_no_warnings
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if(argc < 2){
        printf("Usage: %s number\n", argv[0]);
    }
    int n = (int) strtol(argv[1], NULL, 10);
    if (n<1){
        printf("n must over 1.\n");
        return 0;
    }
    for (int i=1; i<=n; i++){
        if(n % i == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}