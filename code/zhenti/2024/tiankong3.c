#include <stdio.h>
int a = 5;
int main()
{
    int fun(int a);
    fun(a);
    printf("%d", a);
    return 0;
}

int fun(int a)
{
    a=10;
    return 0;
}

