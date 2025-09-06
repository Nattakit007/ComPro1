#include <stdio.h>
int main()
{
    char inp[300];
    int count;
    printf(" *** To Lower Case ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]", inp);

    for (count = 0; inp[count] != '\0'; count++)
    {
        if (inp[count] >= 'A' && inp[count] <= 'Z')
        {
            inp[count] = inp[count] + 32;
        }
        // printf("%c\n", name[count]);
    }
    printf("Output : %s", inp);
    return 0;
}