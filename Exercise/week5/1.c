#include <stdio.h>
int main()
{
    printf("Enter 'number' and 'count' : ");
    int num, count, result;
    scanf("%d %d", &num, &count);
    // printf("%d\n",count);
    if (count > 1)
    {
        result = 0;
        for (count; count > 1; count--)
        {
            printf("%d + ", num);
            result += num;
        }
            result += num;
        // result = num * count;
        printf("%d = %d",num, result);
    }

    
    else if (count <= 1)
    {
        printf("I can move on");
    }
    return 0;
}
