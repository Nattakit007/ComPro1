#include <stdio.h>
int main()
{
    printf(" *** Display Summation ***");
    int first =0;
    int back = 0;
    int summation = 0;
    int tempint = 0;
    printf("\nEnter 2 whole numbers : ");
    scanf("%d %d", &first, &back);

    // printf("%d %d",)
    if (back < first)
    {
        tempint = back;
        back = first;
        first = tempint;
    }
    printf("Summation = ");

    for (int i = first; i <= back; i++)
    {
        summation += i;
        // printf("%d", i);
        if (i < back)
        {   
            printf("%d + ", i);
        }
        else if (i = back)
        {
            printf("%d", i);
        }
    }
    printf(" = %d", summation);
}