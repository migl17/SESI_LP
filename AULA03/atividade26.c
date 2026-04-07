int n;
printf("Tamanho do quadrado: ");
scanf("%d", &n);
for(int i = 0; i < n; i++) {       // Linhas
    for(int j = 0; j < n; j++) {   // Colunas
        printf("* ");
    }
    printf("\n"); // Pula linha após terminar as colunas
}