#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int cmc,fim,tempo;
    printf("Hora do começo do jogo: ");
    fflush(stdin);
    scanf("%i",&cmc);
    printf("Hora do fim do jogo: ");
    fflush(stdin);
    scanf("%i",&fim);
    tempo = fim - cmc;
    if (cmc>fim) {tempo += 24; printf("O jogo durou %i horas",tempo);}
    else printf("O jogo durou %i horas",tempo);
}
