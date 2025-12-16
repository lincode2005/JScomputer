#include <stdio.h>

int main()
{
    char c1 = 'A', c2 = 100;
    printf("%d, %c\n", c1, c2);
    c1 = c1 + 32; c2 = c2 - 32;
    printf("%c, %d\n", c1, c2);
    return 0;
}

 