#include <stdio.h>

int main() {
    int n[10];

    
    for(int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &n[i]);

        
        if (n[i] < 0) {
            n[i] = 0; 
        }
    }

   
    printf("\nLista final (sem negativos):\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}