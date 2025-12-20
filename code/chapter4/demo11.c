#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if(x++>5) printf("%d\n", x);
    printf("%d\n", x);
    return 0; 
}


