#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[20];
    char phoneNum[11]; 
} PhoneNumber;

int main(void)
{
    PhoneNumber phone1 = {"bjb", "01089524095"};
    PhoneNumber *p = &phone1;
    PhoneNumber phone2 = phone1;
    

    printf("Name: %s\n", phone1.name);
    printf("Name: %s\n", p->name);
    printf("PhoneNumber: %s\n", phone1.phoneNum);  
    printf("PhoneNumber: %s\n", p->phoneNum);  
    printf("%c %c\n", phone1.name[10], phone1.name[15]);
    printf("Name: %s\n", phone2.name);
    printf("PhoneNumber: %s\n", phone2.phoneNum);    
    printf("%c %c\n", phone2.name[10], phone2.name[15]);
    return 0;
}