#include <stdio.h>

int main()
{
    int a = 3, b = 5;
    a += b++;
    printf("%d, %d\n", a, b);
    return 0;
}

