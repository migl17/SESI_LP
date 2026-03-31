#include <stdio.h>

int main() {
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("O numero %.2f eh POSITIVO.\n", num);
    } 
    else if (num < 0) {
        printf("O numero %.2f eh NEGATIVO.\n", num);
    } 
    else {
        printf("O numero digitado eh ZERO.\n");
    }

    return 0;
}

