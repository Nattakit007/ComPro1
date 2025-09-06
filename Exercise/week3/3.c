#include <stdio.h>
float a;
float b;
int main()
{
    printf(" *** Convert Fahrenheit to Celcius ***\n");
    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%f", &a);
    b = (a - 32.0) / 1.8;
    printf("%.2f degree Fahrenheit equals %.2f degree celcius.", a, b);
}