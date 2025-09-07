#include <stdio.h>
int main(){
    int x;
    x = 1;       
    while (x <= 10) // 00
    {
        printf("x=%d\n", x);
        x++; // 01
    }
    printf("\nAfter loop end, x = % d", x); // 03
    return 0;
}