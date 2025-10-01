#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    printf("Enter a string : ");
    char str[5000];
    scanf("%[^\n]", str);

    char phase[5000];
    for (int i = 0; str[i] != '\0'; i++)
    {
        phase[i] = toupper(str[i]);
    }
    printf("Capital : %s\n", phase);

    char phase2[5000];
    for (int i = 0; str[i] != '\0'; i++)
    {
        phase2[i] = tolower(str[i]);
    }
    printf("Small : %s\n", phase2);

    return 0;
}