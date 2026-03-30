#include<stdio.h>
#include<stdlib.h>
float a,b,c;
char z;
int main(){
    printf("\n ===CALCULADORA===\n\nquer fazer oq :\n\n a: somar\n b:subtrair \n c:dividir \n d:multiplicar\n\n");
    scanf("%c",&z);
        fflush(stdin);
        if (z == 'a'){
            printf("\nADIÇÃO\nfale um numero\n");
            scanf("%f",&a);
            printf("\nfale outro\n");
            scanf("%f",&b);
            c=a +b;
            printf("%f + %f = %f",a,b,c);
            return 0;
        }else if( z == 'b'){
             printf("\nSUBTRACAO\nfale um numero\n");
            scanf("%f",&a);
            printf("\nfale outro\n");
            scanf("%f",&b);
            c= a -b;
            printf("%f - %f = %f",a,b,c);
            return 0;
        }else if( z == 'c'){
             printf("\nDIVISAO\nfale um numero\n");
            scanf("%f",&a);
            printf("\nfale outro\n");
            scanf("%f",&b);
            c= a/b;
            printf("%f / %f = %f",a,b,c);
            return 0;
        }else if( z == 'd'){
             printf("\nMULTIPLICACAO\nfale um numero\n");
            scanf("%f",&a);
            printf("\nfale outro\n");
            scanf("%f",&b);
            c= a*b;
            printf("%f x %f = %f",a,b,c);
            return 0;}
    return 0;
}
