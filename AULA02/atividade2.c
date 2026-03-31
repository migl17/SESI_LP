/*Leia um número inteiro e informe se ele é par ou ímpar.
*/
#include<stdio.h>
#include <stdlib.h>
int n;
int main(){
    printf("\n========== PAR OU IMPAR? =========\n");
    printf("Digite um numero:\n");
    scanf("%d",&n);//pega numero
    printf("\ncalculando\n.\n..\n...\n....");
     if(n % 2 == 0){  
         printf("\n O numero %d eh par",n);
     }else{
        printf("\n O numero %d eh impar",n);
     }
return 0;
}
//fim!!
