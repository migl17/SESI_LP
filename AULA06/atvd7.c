#include <stdio.h>
void main() {
    int m[5][5], s = 0;
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            scanf("%d", &m[i][j]);
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(i + j == 4) {
                printf("[%3d] ", m[i][j]);
                s += m[i][j];
            } else printf("      ");
        }
        printf("\n\n");
    }
    printf("Soma: %d\n", s);
}