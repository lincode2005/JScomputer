#include <stdio.h>

int main()
{
    int a=2, b=3, c=4;
    int x;
    x=a=b=c+4;
    printf("a=%d b=%d c=%d x=%d", a, b, c, x);
    return 0;
}

