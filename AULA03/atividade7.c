#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 10; i++) {
        soma = soma + i; // ou soma += i;
    }
    printf("A soma de 1 ate 10 e: %d", soma);
    return 0;
}