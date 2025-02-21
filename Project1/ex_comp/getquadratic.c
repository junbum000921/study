#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int quadratic(int a, int b, int c, double* x1, double* x2) {
    double D = b * b - 4 * a * c;
    if (D < 0) {
        return 0;
    }
    *x1 = (-b + sqrt(D)) / (2 * a);
    *x2 = (-b - sqrt(D)) / (2 * a);
    return 1;
}

void printResult(double x1, double x2, int r){
    if(r==0){
        printf("No real roots\n");
    }
    else{
        printf("x1: %lf, x2: %lf\n", x1, x2);
    }
}

int main(){
    int a, b, c;
    double x1, x2;
    for (int i = 0; i < 3; i++){
        printf("Enter a, b, c: ");
        scanf("%d %d %d", &a, &b, &c);
        int r = quadratic(a, b, c, &x1, &x2);
        printResult(x1, x2, r);
    }
    
    return 0;
}