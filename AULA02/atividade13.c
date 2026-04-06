#include <stdio.h>

int main() {
    float n1, n2, resultado;
    char op;
    printf("Digite: numero operador numero (ex: 10 + 5): ");
    scanf("%f %c %f", &n1, &op, &n2);

    if (op == '+') printf("Resultado: %.2f\n", n1 + n2);
    else if (op == '-') printf("Resultado: %.2f\n", n1 - n2);
    else if (op == '*') printf("Resultado: %.2f\n", n1 * n2);
    else if (op == '/') {
        if (n2 != 0) printf("Resultado: %.2f\n", n1 / n2);
        else printf("Erro: Divisao por zero!\n");
    }
    return 0;
}