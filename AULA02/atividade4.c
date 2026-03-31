

/*4) Verificação de Aprovação
Leia a nota de um aluno (0 a 10).*/
#include<stdio.h>
#include<stdlib.h>
float a,b,c,d;
int main(){
    printf("--MEDIA--\n\nVamos calcular sua media\n");
    printf("\nfale sua primeira nota :\n");
    scanf("%f",&a);
    printf("\nfale sua segunda nota :\n");
    scanf("%f",&b);
    printf("\nfale sua terceira nota :\n");
    scanf("%f",&c);
    d = (a+b+c )/3;
    printf("sua media foi %.1f",d);
     if (d >6.9 ){
         printf("\npassou parabens");
     }else if (d>5){
         printf("\nem recuperação");
     }else {
         printf("\nreprovado");
     }
return 0;
}
