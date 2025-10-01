#include<stdio.h>
#define PI 3.1416
void Cal_Circle(int r);
int main() 
{
  	int rad1;
  	printf("Input Radius of Circle (mm) : ");
   	scanf("%d",&rad1);
	Cal_Circle(rad1);
	return 0;
}
void Cal_Circle(int r){
    printf("Diameter = %d mm\n", r*2);
    printf("Circumference = %.2f mm\n",2.00*PI*(r*1.00));
    printf("Aera = %.2f mm2",PI*(r*1.00)*(r*1.00));
}