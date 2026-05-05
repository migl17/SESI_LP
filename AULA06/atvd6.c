#include <stdio.h>
void main() {
    int m[4][4], ma, me;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            scanf("%d", &m[i][j]);
            if(i==0 && j==0) ma = me = m[i][j];
            if(m[i][j] > ma) ma = m[i][j];
            if(m[i][j] < me) me = m[i][j];
        }
    }
    printf("Maior: %d\nMenor: %d\n", ma, me);
}