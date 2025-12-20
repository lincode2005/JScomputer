#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    if(x>=0) y = x;
    if(x<0) y = -x;
    printf("y=%d\n", y);
    return 0;
}

