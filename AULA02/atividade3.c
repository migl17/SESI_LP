/*3) Maior entre dois números
Leia dois números inteiros e informe qual é o maior ou se são iguais.*/

#include<stdio.h>
#include <stdlib.h>
int n1,n2;
int main(){
    printf("======MAIOR OU MENOR ?======");
    printf("\n\nDigite um numero:\n");
    scanf("%d",&n1);
    printf("\n\nDigite outro numero:\n");
    scanf("%d",&n2);
    if(n1>n2){
         printf("\no numero %d eh maior do que %d",n1,n2);
    }else if(n1<n2){
        printf("\no numero %d eh maior do que %d",n2,n1);
    }else if(n1=n2){
        printf("\nos valores são iguais");
    }
return 0;
}
//fim!!
