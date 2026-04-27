#include<stdio.h>

int n[10];

int main(){
	printf("fale 10 numeros\n");
	for(int i=0;i<10;i++){
		printf(":");
		scanf("%d",&n[i]);
	}
	printf("\nnumeros pares sao\n");
	for(int i=0;i<10;i++){
		if (n[i]%2==0){
			printf("%d\n",n[i]);
		}
	}

return 0;
}

