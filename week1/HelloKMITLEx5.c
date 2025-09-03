#include<stdio.h>
int main(){
    for(int i = 0;i<3;i++){
        printf("0123456789abcdefghij");
    }
    printf("\n");
    for(int i = 0;i<4;i++){
        printf("          1234567890");
    }
    for(int i = 0;i<4;i++){
        printf("0123456789          ");
    };
    for(int i = 0;i<4;i++){
        printf("          1234567890");
    }
    for(int i = 0;i<9;i++){
        printf("12345678");
    }
    printf("\n\t1\t12\t123\t1234\t12345\t123456\t1234567\t12345678");
    return 0;
}