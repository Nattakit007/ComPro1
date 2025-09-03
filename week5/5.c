#include <stdio.h>
int main(){
    int count;
    printf("Enter number : ");
    scanf("%d",&count);
    if (count>0)
    {
        for(int i = 0 ;i< count;i++){
            printf("I Miss You\n");
        }
    }
    else printf("</3");
    return 0;
}