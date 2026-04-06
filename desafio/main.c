#include<stdio.h>
float alunos=1,mediat,maluno,alta=0;
float a,b,c;
char opcao;
int main(){
	printf("=============MEDIA da turma===============\n\nInforme as notas do primeiro aluno\n");
	printf("primeira nota:\n");
	scanf("%f",&a);
	printf("segunda nota:\n");
	scanf("%f",&b);
	printf("terceira nota:\n");
	scanf("%f",&c);
	maluno= (a+b+c)/3;
	mediat=maluno;
	maluno=0;
	printf("mais alunos?\nS/N\n");
	scanf(" %c",&opcao);

	do{
		alunos++;
		printf("primeira nota:\n");
		scanf("%f",&a);
		printf("segunda nota:\n");
		scanf("%f",&b);
		printf("terceira nota:\n");
		scanf(" %f",&c);
		maluno= (a+b+c)/2;
		mediat=mediat+maluno;
		if (maluno>alta){
			alta=maluno;
		}
		maluno=0;
		printf("mais alunos?\nS/N\n");
		scanf(" %c",&opcao);
	}while(opcao=='s'|| opcao=='S');
	mediat=mediat/alunos;
	printf("\n\n===RESULTAD0===\n\n");
	printf("\ntotal de alunos=%.0f\n",alunos);
	printf("media da turma =%.1f\n",mediat);
	printf("maior media =%.1f\n",alta);
	return 0;
}