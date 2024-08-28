#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int ano,nascimento,idade;
    printf(" Ano atual: ");
    fflush(stdin);
    scanf("%i",&ano);
    printf(" Qual o seu ano de nascimento: ");
    fflush(stdin);
    scanf("%i",&nascimento);
    idade = ano - nascimento;
    if (idade>=18) printf(" Você pode votar esse ano");
    else printf(" Você não pode votar esse ano");
}
