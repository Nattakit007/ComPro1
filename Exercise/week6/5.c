#include <stdio.h>
int main()
{
    printf(" *** Find Solution a*a*b = n *** \n");
    printf("Enter n : ");
    int n;
    scanf("%d", &n);
    int a, b;
    int state = 1;
    int count = 1;

    for (int i = 1; i <= n; i++)
    {
        a = i;
        b = n / (a * a);

        if (a * a * b == n)
        {
            printf("  %d. (a,b) = (%d,%d)", count, a, b);
            count++;

            printf("\n");
        }
    }
    printf("There are %d solution(s).", count - 1);
}