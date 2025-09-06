#include <stdio.h>
int main()
{
    int a, b, c;
    float mean;
    printf(" *** Find Min, Mid, Max and Mean ***\n");
    printf("Enter 3 integers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            printf("Min = %d , Mid = %d , Max = %d", c, b, a);
        }
        else if (c >= b)
        {
            printf("Min = %d , Mid = %d , Max = %d", b, c, a);
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("Min = %d , Mid = %d , Max = %d", c, a, b);
        }
        else if (c >= a)
        {
            printf("Min = %d , Mid = %d , Max = %d", a, c, b);
        }
    }
    else if (c >= a && c >= b)
    {
        if (a >= b)
        {
            printf("Min = %d , Mid = %d , Max = %d", b, a, c);
        }
        else if (b >= a)
        {
            printf("Min = %d , Mid = %d , Max = %d", a, b, c);
        }
    }
    mean = ((a*1.00)+(b*1.00)+(c*1.00))/3.0;
    printf("\nMean = %.3f",mean);
    return 0;
}