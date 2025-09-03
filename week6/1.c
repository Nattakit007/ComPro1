#include <stdio.h>
int main()
{
    int r, c, n;
    printf(" *** Show isosceles triangle ***");
    printf("\nEnter a counting number : ");
    scanf("%d", &n);
    if (n < 3)
    {
        printf(" --- Incorrect number. ---");
    }
    else
    {
        printf("Output : \n");
        for (r = 1; r <= n; r++)
        {
            for (c = 1; c <= (2 * n) - 1; c++)
            {
                if ((r + c) > n && (c - r) < n)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}