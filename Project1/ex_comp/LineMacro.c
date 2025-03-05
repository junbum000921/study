#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ = %s\n", __FILE__);
    printf("Use #line 10 \"newfile.c\"\n");
    #line 1 "newfile.c"
    #include "newfile.c"
    #line 11 "LineMacro.c"
    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ = %s\n", __FILE__);
    printf("Use #line 13\n");
    #line 100
    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ = %s\n", __FILE__);
    
    return 0;
}