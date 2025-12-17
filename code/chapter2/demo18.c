#include <stdio.h>

int main()
{
    int a, b;
    printf("%d\n", (a=2, b=5, b++, a+b));
    return 0;
}

