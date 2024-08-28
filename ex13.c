#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int atual,max,min,media;
    printf("Quantidade atual em estoque: ");
    fflush(stdin);
    scanf("%i",&atual);
    printf("Quantidade máxima em estoque: ");
    fflush(stdin);
    scanf("%i",&max);
    printf("Quantidade mínima em estoque: ");
    fflush(stdin);
    scanf("%i",&min);
    media = (max + min)/2;

    if (atual>=media) printf("Não efetuar a compra");
    else printf("Efetuar a compra");
}
