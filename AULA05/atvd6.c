#include<stdio.h>

int n[10],media=0;

int main(){
	printf("fale 10 numeros\n");
	for(int i=0;i<10;i++){
		printf(":");
		scanf("%d",&n[i]);
	}
	;
	for(int i=0;i<10;i++){
		media=media+n[i];
			
		}
printf("\n media e %d\n",media/10);
return 0;
}

