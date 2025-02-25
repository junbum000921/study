#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void InterruptHandler0(void* p)
{
    int* intPtr = (int*) p;
    
    printf("Servicing Interrupt %d\n", *intPtr);
    printf("Servicing Interrupt %d\n", *((int*) p)); // 짧은 버전
}

void InterruptHandler1(void* p)
{
    double* dblPtr = (double*) p;
    
    printf("Handling Interrupt: value = %f\n", *dblPtr);
    printf("Handling Interrupt: value = %f\n", *((double*) p)); // 짧은 버전
}

void InterruptHandler2(void* p)
{
    char* pStr = (char*) p;
    
    printf("Servicing Interrupt named \"%s\"\n", pStr);
    printf("Servicing Interrupt named \"%s\"\n", ((char*) p)); // 짧은 버전
}

typedef void (*InterruptHandler)(void*);

InterruptHandler handlers[] = { InterruptHandler0, InterruptHandler1, InterruptHandler2 };

void callInterruptHandler(int interruptNo)
{
    if (interruptNo == 0) {
	    handlers[interruptNo](&interruptNo);    
    }
    else if (interruptNo == 1) {
        double pi = 3.1415;
	    handlers[interruptNo](&pi);    
    }
    else if (interruptNo == 2) {
        handlers[interruptNo]("Interrupt 2 Handler");
    }
}

int main(void)
{   
    int interruptNo;
    printf("인터럽트 번호 0, 1, 2 중 한 개 입력하세요: ");
    scanf("%d", &interruptNo);
    callInterruptHandler(interruptNo);
    return 0;
}