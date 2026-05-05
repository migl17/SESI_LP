#include <stdio.h>
void main() {
    int m[3][3], sl;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d", &m[i][j]);
    for(int i=0; i<3; i++) {
        sl = 0;
        for(int j=0; j<3; j++) sl += m[i][j];
        printf("Linha %d: %d\n", i, sl);
    }
}