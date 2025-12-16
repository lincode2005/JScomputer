#include <stdio.h>

int main()
{
    printf("%d %d\n", 012, 0x12);
    printf("%o %o\n", 10, 12);  // 无前导
    printf("%x %x", 10, 12);    // 无前导
    return 0;
}
