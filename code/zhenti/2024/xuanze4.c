#include <stdio.h>

int main()
{
    int n=2;
    if(++n>2) printf("%d\n", n);
    else printf("%d\n", n--);
    return 0;
}

