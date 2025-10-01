#include <stdio.h>

// ฟังก์ชัน sort แบบ pass by reference
void sort(int arr[]) {
    int i, j, temp;
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (arr[i] < arr[j]) {
                // สลับค่า (เรียงจากมากไปน้อย)
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int scores[5], i;
    printf("Enter 5 score : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &scores[i]);
    sort(scores);
    printf("Sorted : ");
    for (i = 0; i < 5; i++)
        printf("%d ", scores[i]);
}
