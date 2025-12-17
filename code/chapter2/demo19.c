#include <stdio.h>

int main()
{
    int a = 1;
    printf("%d\n", ((a=a+4, a+5), a+6));
    return 0;
}



