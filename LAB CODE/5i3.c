#include <stdio.h>
int main(){
    int x;
    x = 0;       //01
    while (x < 36){   //02
            printf("Hello there\n");
            x+=6; //03
    } 
    printf("\nAfter loop end, x = % d", x); //04
}