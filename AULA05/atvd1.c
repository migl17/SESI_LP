#include<stdio.h>

int n[5];

int main(){
	printf("fala 5 numeros\n");


	for(int i=0 ; i<5; i++){
		printf("fale o numero %d\n",i+1);
		scanf("%d",&n[i]);
	}
	for(int i=0 ; i<5; i++){
		printf("posição %d = %d\n",i+1,n[i]);

	}
return 0;

}