#include <stdio.h>
int main(){
    int i= 0,x;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (i < x){
            printf("Loop: %d\n",i);
            i+=9; //01
    }
    return 0;
}