#include <stdio.h>
int main() {
    float n[10], soma = 0, media;
    for(int i=0; i<10; i++) {
        scanf("%f", &n[i]);
        soma += n[i];
    }
    media = soma / 10;
    printf("Media: %.2f\nMaiores que a media: ", media);
    for(int i=0; i<10; i++) {
        if(n[i] > media) printf("%.1f ", n[i]);
    }
    return 0;
}