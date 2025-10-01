#include <stdio.h>
int finddifferences(int arrinput[]){
    int maxdiff = 0;
    for (int i = 0; i < 9; i++){
        int diff = arrinput[i] - arrinput[i+1];
        if (diff < 0) diff = -diff;
        if (diff > maxdiff) maxdiff = diff;
    }
    return maxdiff;
    
}
int main(){
    int arr[10];
    printf(" *** Maximum diference of adjacent number ***\n");
    printf("Enter 10 integers : ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
    printf("Maximum differnce is %d\n", finddifferences(arr));

}