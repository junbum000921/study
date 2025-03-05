#include "Common.c"
#define SIZE 5

int main(void)
{
    int* pInt = (int*) malloc(sizeof(int));
    double* pArr = (double*) malloc(sizeof(double) * SIZE);
    PhoneNumber* pPhone = (PhoneNumber*) malloc(sizeof(PhoneNumber));  
    if (pInt == NULL || pArr == NULL || pPhone == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }    
    printData(pInt, 1, pArr, SIZE, pPhone, 1);
    *pInt = 3;
    for (int i = 0; i < SIZE; i++) {
        pArr[i] = i * .5;
    }
    strcpy(pPhone->name, "Cho");
    strcpy(pPhone->phoneNum, "01011112222");
    printData(pInt, 1, pArr, SIZE, pPhone, 1);
    free(pInt);
    free(pArr);
    free(pPhone);
    return 0;
}