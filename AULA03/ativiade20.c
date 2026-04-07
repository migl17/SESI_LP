int senha;
while(1) {
    printf("Senha: ");
    scanf("%d", &senha);
    if(senha == 1234) { printf("Acesso Permitido!"); break; }
    else printf("Errado! Tente de novo.\n");
}