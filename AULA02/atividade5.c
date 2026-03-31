
/* Cálculo de Desconto
Leia o valor de uma compra:*/
#include<stdio.h>
#include<stdlib.h>
float valor,adicao=0,desconto;
int produtos;
char opcao;
int main(){
    printf("\n======MANFROI SUPER MERCADOS========\n");
    do{
        printf("\nQual o valor do produto ?\n");
        scanf("%f",&adicao);
        valor=valor +adicao;
        adicao=0;
        produtos++;
        printf("Mais algum produto?\n S|N\n");
        scanf(" %c",&opcao);
     }while (opcao=='s'||opcao=='S');
        printf("\n seu gasto foi de $%.2f",valor);
        printf("\n vou calcular seu desconto");
        if(valor>100){
            desconto = valor/100*10;
            desconto = valor-desconto;
        }else{
            desconto = valor/100*5;
            desconto = valor-desconto;
        }
        printf("\n\n========================\n");
        printf("Total de produtos:       %d \n",produtos);
        printf("Valor total:            %.2f\n",valor);
        printf("valor com descoonto:    %.2f\n",desconto);
        printf("\n OBRIGADO PELA PREFERENCIA!!\n========================");
        return 0;
}
