int n, soma = 0;
do {
    printf("Digite um numero (0 para sair): ");
    scanf("%d", &n);
    soma += n;
} while(n != 0);
printf("Soma total: %d", soma);