#include <stdio.h>

void print_id_card(char name[], char job[], int age);

int main()
{
    char name[100];
    char job[100];
    int age;

    printf("Enter name, age, job : ");
    scanf("%s %d %s", name, &age, job);

    print_id_card(name, job, age);

    return 0;
}
void print_id_card(char name[], char job[], int age)
{
    for (int i = 0; i < 6; i++)
    {
        if (i == 0 || i == 5)
        {
            for (int j = 0; j < 22; j++)
            {
                printf("=");
            }
            printf("\n");
        }
        else if(i ==1){
            printf("| %-19s|\n", name);
        }
        else if(i ==2){
            printf("| ------------------ |\n");
        }
        else if(i == 3){
            printf("| Age : %-13d|\n", age); 
        }
        else if(i == 4){
            printf("| Job : %-13s|\n", job);
        }
    }
}