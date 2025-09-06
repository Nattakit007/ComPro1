#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int choose;
    printf("Enter Num1 : ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);
    printf("Calculator Menu :\n");
    printf("%6s", "1. +\n");
    printf("%6s", "2. -\n");
    printf("%6s", "3. *\n");
    printf("%6s", "4. /\n");
    printf("%6s", "5. %\n");
    printf("Choose Menu : ");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        printf("Ans : num1 + num2 = %d\n", num1 + num2);
        break;
    case 2:
        printf("Ans : num1 - num2 = %d\n", num1 - num2);
        break;
    case 3:
        printf("Ans : num1 * num2 = %d\n", num1 * num2);
        break;
    case 4:
        printf("Ans : num1 / num2 = %d\n", num1 / num2);
        break;
    case 5:
        printf("Ans : num1 %% num2 = %d\n", num1 % num2);
        break;
    default:
        printf("you enter the wrong calculation menu ");
        break;
    }

    return 0;
}