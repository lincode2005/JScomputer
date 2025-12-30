#include <stdio.h>

int main()
{
    int i=8;
    while(i)
    {
        if(i<=6) break;
        printf("%d", i);
        i--;
    }
    return 0;
}

