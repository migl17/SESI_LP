#include <stdio.h>

int main() {
    int limite;
    printf("Ate quanto voce quer contar? ");
    scanf("%d", &limite);

    for (int i = 1; i <= limite; i++) {
        printf("%d ", i);
    }
    return 0;
}