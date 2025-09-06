#include <stdio.h>
int main()
{
    char name[300];
    int count;
    printf("Enter your name : ");
    scanf("%s", name);

    for (count = 0; name[count] != '\0'; count++)
    {
        if (name[count] >= 97 && name[count] <= 122)
        {
            name[count] = name[count] - 32;
        }
        printf("%c\n", name[count]);
    }
    printf("Name length : %d", count);
    return 0;
}