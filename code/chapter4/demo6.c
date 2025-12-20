#include <stdio.h>

int main()
{
    int a=3, b=4, t=0;
    if(a>b) t=a; a=b; b=t;
    printf("%d, %d\n", a, b);
    return 0;
}

