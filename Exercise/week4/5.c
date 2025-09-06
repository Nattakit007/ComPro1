#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    printf("A is +\nB is -\nC is *\nD is /\n");
    printf("Enter number and operator : ");
    scanf("%d %c %d", &num1, &op, &num2);
    float result;
    // printf("%d",op);
    switch (op)
    {
    case 65:
        if (num1 >= num2)
        {
            result = num1 + num2;
            printf("%d+%d = %.3f", num1, num2, result);
        }
        if (num2 > num1)
        {
            result = num2 + num1;
            printf("%d+%d = %.3f", num2, num1, result);
        }
        break;
    case 66:
        if (num1 >= num2)
        {
            result = num1 - num2;
            printf("%d-%d = %.3f", num1, num2, result);
        }
        if (num2 > num1)
        {
            result = num2 - num1;
            printf("%d-%d = %.3f", num2, num1, result);
        }
        break;
    case 67:
        if (num1 >= num2)
        {
            result = num1 * num2;
            printf("%d*%d = %.3f", num1, num2, result);
        }
        if (num2 > num1)
        {
            result = num2 * num1;
            printf("%d*%d = %.3f", num2, num1, result);
        }
        break;
    case 68:
       if (num1 >= num2)
        {
            result = (float)num1 / (float)num2;
            printf("%d/%d = %.3f", num1, num2, result);
        }
        if (num2 > num1)
        {
            result = (float)num2 / (float)num1;
            printf("%d/%d = %.3f", num2, num1, result);
        }
        break;
    }
    return 0;
}