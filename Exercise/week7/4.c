#include <stdio.h>

int has_lower_case(char string[]);
int has_upper_case(char string[]);
int has_number(char string[]);
int count_length(char string[]);

int main()
{
    char password[200];
    printf("Enter password : ");
    scanf("%s", password);
    /* CODE OUTPUT HERE */
    printf("verifying . . .\n");
    if(count_length(password) >= 8 && has_lower_case(password) > 0 && has_upper_case(password) > 0 && has_number(password) > 0)
        printf("> Your password is strong!");
    else
        printf("> Your password is weak!");
        return 0;
}






int has_number(char string[])
{
    int i, flag = 0; // 0 is false
    for (i = 0; string[i] != '\0'; i++)
    {
        
        if (string[i] > '0' && string[i] < '9')
        {
            flag++;
        }
    }
    return flag;
}
int has_upper_case(char string[])
{
    int i, flag = 0; // 0 is false
    for (i = 0; string[i] != '\0'; i++)
    {
        
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            flag++;
        }
    }
    return flag;
}
int has_lower_case(char string[])
{
    int i, flag = 0; // 0 is false
    for (i = 0; string[i] != '\0'; i++)
    {
        
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            flag++;
        }
    }
    return flag;
}
int count_length(char string[])
{
    int i, count = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
