int n, cont = 0;
while(1) {
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n < 0) break;
    cont++;
}
printf("Voce digitou %d numeros positivos.", cont);