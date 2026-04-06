#include <stdio.h>

int main() {
    float salario;
    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if (salario > 3000) salario *= 1.05; // 5%
    else salario *= 1.10;               // 10%

    printf("Salario final com bonus: R$ %.2f\n", salario);
    return 0;
}