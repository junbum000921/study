#include "Common.c"

#define SIZE 5

int main(void)
{
    int* pInt = (int*) calloc(1, sizeof(int));
    double* pDblArr = (double*) calloc(SIZE, sizeof(double));
    PhoneNumber* pPhone = (PhoneNumber*) calloc(1, sizeof(PhoneNumber)); 
    if (pInt == NULL || pDblArr == NULL || pPhone == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }    
    printData(pInt, 1, pDblArr, SIZE, pPhone, 1);
    *pInt = 3;
    for (int i = 0; i < SIZE; i++) {
        pDblArr[i] = i * .5;
    }
    strcpy(pPhone->name, "Cho");
    strcpy(pPhone->phoneNum, "01011112222");
    printData(pInt, 1, pDblArr, SIZE, pPhone, 1);
    free(pInt);
    free(pDblArr);
    free(pPhone);
    return 0;
}