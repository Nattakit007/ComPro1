#include <stdio.h>
int main()
{
    int x;
    int sample = 65;
    int count;
    printf("Enter : ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        count = 1;
        sample = 65+i;
        while (count <= x)
        {
            printf("%c", sample);
            sample++;
            count++;
            if (sample > 65 + (x-1))
            {
                sample = 65;
            }
        }
        printf("\n");
    }
}
