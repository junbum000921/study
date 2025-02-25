#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello ";
    char str2[] = "World!";
    char str3[] = "";
    int a=0;
    printf("%d %d %d\n", a++,a++,a++);
    printf("%s + %s = %s\n",str,str2,strcat(str,str2));
    printf("\"\" + %s = %s\n", str, strcat(str,str3));
    printf("%s + '!' = %s\n",str, strncat(str, "!!!!!",1));
    return 0;
}