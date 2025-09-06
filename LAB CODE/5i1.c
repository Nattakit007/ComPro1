#include <stdio.h>
int main()
{
    int x;
    x = 1;        // 00
    while (x < 5) // 01
    {
        printf("Loop Test\n");
        x++; // 02
    }
    printf("\nAfter loop end, x = % d", x); // 03
    return 0;
}