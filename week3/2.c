#include <stdio.h>
int a;
int main()
{
    printf(" *** Show a number in variety formats. *** \n");
    printf("Enter a whole number : ");
    scanf("%d", &a);
    printf("You have input : %d\n", a);
    printf("You have input : %.2f\n", a * 1.00);
    printf("Square : %d\n", a * a);
    printf("%6d / 79 = %.4f\n", a, a / 79.00);
    printf("%6d / 29 = %.6f\n", a, a / 29.00);
    printf("%6d / 37 = %.9f", a, a / 37.00);
}