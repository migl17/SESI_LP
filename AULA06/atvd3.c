#include <stdio.h>
void main() {
    int m[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d", &m[i][j]);
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i == j) printf("[%3d] ", m[i][j]);
            else printf("      ");
        }
        printf("\n\n");
    }
}