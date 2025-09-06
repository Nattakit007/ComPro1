#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter the operator (+, -, *, /) and two numbers : ");
    scanf("%d %c %d", &a, &op, &b);
    // printf("\n%d",m);
    switch (op)
    {
    case 42:
        printf("%d * %d = %d", a, b, a * b);
        break;
    case 43:
        printf("%d + %d = %d", a, b, a + b);
        break;
    case 45:
        printf("%d - %d = %d", a, b, a - b);
        break;
    case 47:
        printf("%d / %d = %.2f", a, b, (a * 1.00) / (b * 1.00));
        break;
    default:
        printf("Something Wentwrong please check your input");
        break;
    }
}