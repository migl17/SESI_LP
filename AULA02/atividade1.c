//Classificação de Idade


#include<stdio.h>
#include <stdlib.h>
int idade; //idade da pessoa
int main(){
    printf("\nfale sua idade\n");//comando visual
    scanf("%d",&idade);//recebe idade
    if (idade <= 12) {
        printf("\nVoce eh crianca.\n");
    } 
    else if (idade <= 17) {
        printf("\nVoce eh adolescente.\n");
    } 
    else if (idade <= 59) {
        printf("\nVoce eh adulto.\n");
    } 
    else {
        printf("\nVoce eh idoso.\n");
    }

    return 0;
return 0;
}
//tecnica de escadinha
