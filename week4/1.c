#include <stdio.h>
int main()
{
    int a, b, c, min, max;
    printf(" *** Max & Min ***\n");
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);
    if (a > 0 && a <= 100 && b > 0 && b <= 100)
    {
        if (a > b)
        {
            printf("Max : %d\n", a);
            printf("Min : %d\n", b);
        }
        else if (b > a)
        {
            printf("Max : %d\n", b);
            printf("Min : %d\n", a);
        }
        else
        {
            printf("Equals.");
        }
    }
    else{
        printf("OUT OF RANGE.");
    }
    return 0;
}