#include <stdio.h>
int main()
{
    char x, y, z;
    int a, b, c;
    printf(" *** Character Sum Number ***\n");
    printf("Enter 3 Character (A,B,C) : ");
    scanf("%c %c %c", &x, &y, &z);
    switch (x)
    {
    case 65:
        a = 10;
        break;
    case 66:
        a = 20;
        break;
    case 67:
        a = 30;
        break;

    default:
        break;
    }
    switch (y)
    {
    case 65:
        b = 10;
        break;
    case 66:
        b = 20;
        break;
    case 67:
        b = 30;
        break;

    default:
        break;
    }
    switch (z)
    {
    case 65:
        c = 10;
        break;
    case 66:
        c = 20;
        break;
    case 67:
        c = 30;
        break;

    default:
        break;
    }
    if (x >= 65 && x <= 67 && y >= 65 && y <= 67 && z >= 65 && z <= 67)
    {
        printf("%c = %d , %c = %d , %c = %d\n", x, a, y, b, z, c);
        printf("%c + %c + %c = %d + %d + %d = %d", x, y, z, a, b, c, a + b + c);
    }
    else
        printf("Input Incorrect.");
}