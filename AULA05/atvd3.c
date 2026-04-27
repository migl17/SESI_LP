#include<stdio.h>

int main(){
	int n[8],soma=0;

	printf("fale 8 numeros para somar\n");
	for(int i =0;i<8;i++){
	printf(":\n");
	scanf("%d",&n[i]);
	soma = soma+ n[i];
	}
	printf("\no resultado da soma e %d\n",soma);
	return 0;

}