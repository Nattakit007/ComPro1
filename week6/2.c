#include <stdio.h>
int main(){
	int x;
	int sample = 9;
	int count;
	printf("input (1-20)  : ");
	scanf("%d",&x);
	
	if(x <= 20&&x>0){
		printf("\n");
		for (int i = 0;i< x;i++){
		count  = 1;
		while(count <= x){
			printf("  %d",sample);
			sample--;
			count ++;
			if(sample < 1){
				sample = 9;
			}
		}
		printf("\n");
	}
	}
	else printf("\nNo Answer");
}
