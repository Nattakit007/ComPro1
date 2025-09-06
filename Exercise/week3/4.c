#include<stdio.h>
char tewxt[500];
int main(){
    printf(" *** Get input from keyboard as string ***\n");
    printf("Please input a string : ");
    scanf("%[^\n]",tewxt);
    printf("string : %s\n",tewxt);
    printf("string : %.7s\n",tewxt);
    printf("string : %.15s\n",tewxt);
    return 0;

}