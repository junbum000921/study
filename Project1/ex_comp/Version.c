#if _MSC_VER < 2000
#error visual studio version must be 2000 or higher
#endif

#include <stdio.h>

int main(void)
{
    printf("_MSC_VER = %d\n", _MSC_VER);
    return 0;
}