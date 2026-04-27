#include<stdio.h>

int main(){
	int n[6],menor=0;

	for(int i =0;i<6;i++){
	printf(":\n");
	scanf("%d",&n[i]);
	if(menor>n[i]){
		menor=n[i];
	}
	}
printf("o menor numero e %d",menor);
return 0;
}
	