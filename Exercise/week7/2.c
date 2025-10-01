#include <stdio.h>

float calculate(int prize, float tax);

int main()
{
    /* CODE INPUT HERE */
    printf("Enter 2 prizes and 2 coupons : ");
    int prize1;
    int prize2;
    float tax1;
    float tax2;
    scanf("%d %d %f %f", &prize1,&prize2,&tax1,&tax2);

    float taxed1 = calculate(prize1, tax1);
    float taxed2 = calculate(prize2, tax2);

    /* CODE OUTPUT HERE */    
    printf("Item1 %d -> %.2f\n", prize1, taxed1);
    printf("Item2 %d -> %.2f\n", prize2, taxed2);

    if (taxed1 < taxed2)
        printf("* Item1 is cheaper");
    else if (taxed1 == taxed2)
        printf("* Item1 is equal to Item2");
    else
        printf("* Item2 is cheaper");
}

float calculate(int prize, float tax)
{
    return prize + (prize * tax / 100);
    /* CODE FUNCTION HERE */
}