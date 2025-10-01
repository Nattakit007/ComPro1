#include <stdio.h>
int main(){
    int numbers[10];
    printf(" *** Descending sort ***\n");
    printf("Enter 10 whole numbers : ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4], &numbers[5], &numbers[6], &numbers[7], &numbers[8], &numbers[9]);

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(numbers[j] < numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    printf("Output : ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}