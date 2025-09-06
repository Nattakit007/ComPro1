#include <stdio.h>
int main()
{
    int a;
    int jackpot;

    printf("Enter lottery number : ");
    scanf("%d", &a);
    printf("%-8s: %d\n", "Jackpot", a);

    printf("%-8s: %d\n", "+1", a + 1);
    printf("%-8s: %d\n", "-1", a - 1);
    printf("%-8s: %3d\n", "First 3", a/1000);
    printf("%-8s: %3d\n", "Last 3", a%1000);
}