#include <stdio.h>
#include <stdlib.h>

int adicao(int n1,int n2){return n1+n2;}

int subtracao(int n1,int n2){return n1-n2;}

int multiplicacao(int n1, int n2){	return n1*n2;}

int divisao(int n1,int n2){if (n2 == 0) return 0; return n1 / n2;}
char opcao,sair ='n';
int resultado,num1,num2;
int main(){
	do{
	
	system("cls");
	printf("----Calculadora---\n\nEscolha uma opcao\n[a]soma  [b]subtracao\n[c]multiplicacao [d]divisao\n");
	scanf(" %c",&opcao);
	system("cls");
		
		switch(opcao) {
			case 'a':
				printf("--Soma--\n\nprimeiro numero\n");
				scanf("%d",&num1);
				system("cls");
				printf("--Soma--\n\nsegundo numero\n");
				scanf("%d",&num2);
				system("cls");
				printf("\n\nResultado = %d\n\n\n\n\n\n",adicao(num1,num2));
				break;
			case 'b':
				printf("--Subtracao--\n\nprimeiro numero\n");
				scanf("%d",&num1);
				system("cls");
				printf("--Subtracao--\n\nsegundo numero\n");
				scanf("%d",&num2);
				system("cls");
				printf("\n\nResultado = %d\n\n\n\n\n\n",subtracao(num1,num2));	
				break;
			case 'c':
				printf("--Multiplicacao--\n\nprimeiro numero\n");
				scanf("%d",&num1);
				system("cls");
				printf("--Multiplicacao--\n\nsegundo numero\n");
				scanf("%d",&num2);
				system("cls");
				printf("\n\nResultado = %d\n\n\n\n\n\n",multiplicacao(num1,num2));	
				break;
			case 'd':
				printf("--Divisao--\n\nprimeiro numero\n");
				scanf("%d",&num1);
				system("cls");
				printf("--Divisao--\n\nsegundo numero\n");
				scanf("%d",&num2);
				system("cls");
				printf("\n\nResultado = %d\n\n\n\n\n\n",divisao(num1,num2));	
				break;
			default:
				system("cls");
				printf("\n-------------erro-----------------\n\n\n\n");
				system("cls");
				break;}
			printf("deseja sair\n[s]sim [n]nao\n");
			scanf(" %c", &sair);
			

		}while (sair=='n'||sair=='N');

	return 0;
}