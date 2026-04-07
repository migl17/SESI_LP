int n, maior = -999999;
while(n != 999) {
    printf("Numero: ");
    scanf("%d", &n);
    if(n > maior && n != 999) maior = n;
}
printf("O maior foi: %d", maior);