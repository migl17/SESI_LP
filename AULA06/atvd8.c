#include <stdio.h>
void main() {
    int a[2][2], b[2][2], r[2][2] = {0};
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%d", &a[i][j]);
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%d", &b[i][j]);
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            for(int k=0; k<2; k++)
                r[i][j] += a[i][k] * b[k][j];
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) printf("%d\t", r[i][j]);
        printf("\n");
    }
}