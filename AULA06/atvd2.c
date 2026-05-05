#include <stdio.h>
void main() {
    int m[2][2], s = 0;
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++) {
            scanf("%d", &m[i][j]);
            s += m[i][j];
        }
    printf("%d\n", s);
}