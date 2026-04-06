#include <stdio.h>

int main() {
    int vel;
    printf("Velocidade do carro (km/h): ");
    scanf("%d", &vel);

    if (vel <= 60) printf("Sem multa.\n");
    else if (vel <= 80) printf("Multa leve.\n");
    else if (vel <= 100) printf("Multa grave.\n");
    else printf("Multa gravissima!\n");

    return 0;
}