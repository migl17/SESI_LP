int idade, soma = 0, cont = 0;
while(1) {
    printf("Idade (0 p/ sair): ");
    scanf("%d", &idade);
    if(idade == 0) break;
    soma += idade;
    cont++;
}
if(cont > 0) printf("Media: %.2f", (float)soma/cont);