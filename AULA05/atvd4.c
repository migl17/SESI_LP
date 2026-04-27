#include<stdio.h>

int main(){
	int n[6],maior=0;

	for(int i =0;i<8;i++){
	printf(":\n");
	scanf("%d",&n[i]);
	if(maior<n[i]){
		maior=n[i];
	}
	}
printf("o maior numero e %d",maior);
return 0;
}
	