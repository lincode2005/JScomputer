#include <stdio.h>

int main()
{
    int a = 5, b = 3;
    int temp;
    printf("交换前: a=%d, b=%d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("交换后: a=%d, b=%d\n", a, b);
    return 0;
}

