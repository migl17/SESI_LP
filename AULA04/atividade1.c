#include <stdio.h>

int main() {
    float notas[10] = {7.5, 8.2, 5.0, 9.5, 6.0, 4.5, 10.0, 7.0, 6.8, 8.5};
    float soma = 0, media;
    int acima = 0;

    for(int i = 0; i < 10; i++) soma += notas[i];
    media = soma / 10;

    printf("Media: %.2f\nNotas acima da media: ", media);
    for(int i = 0; i < 10; i++) {
        if(notas[i] > media) {
            printf("%.1f ", notas[i]);
            acima++;
        }
    }
    printf("\nTotal acima da media: %d\n", acima);
    return 0;
}
