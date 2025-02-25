#include <stdio.h>

struct Address{
    char name[30];
    char phonenum[20];
    char email[30];
    char address[100];
};

int main(){
    struct Address a = {"Bae jun bum", "01089524095", "bjb4095@naver.com","pungducheon-dong 683-8 204"};
    struct Address* p = &a;
    printf("%s\n", p->name);
    printf("%s\n", p->phonenum);
    printf("%s\n", p->email);
    printf("%s\n", p->address);
    
    return 0;
}