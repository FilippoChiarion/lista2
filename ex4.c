#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    float n1,n2,media;
    printf(" Nota 1: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf(" Nota 2: ");
    fflush(stdin);
    scanf("%f",&n2);
    media = (n1+n2)/2;

    if (media>=7) printf(" A sua média foi de %.2f.\n A sua situação é: Aprovado",media);
    else printf(" A sua média foi de %.2f.\n A sua situação é: Reprovado",media);
}
