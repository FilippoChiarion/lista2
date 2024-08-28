#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    float conta,saldo,debito,credito,total;
    printf("Número da conta: ");
    fflush(stdin);
    scanf("%f",&conta);
    printf("Seu saldo: R$ ");
    fflush(stdin);
    scanf("%f",&saldo);
    printf("Débito: ");
    fflush(stdin);
    scanf("%f",&debito);
    printf("Crédito: ");
    fflush(stdin);
    scanf("%f",&credito);

    total = saldo - debito + credito;

    if (total>=0) printf("Seu saldo atual é de R$%.2f\nSaldo positivo",total);
    else printf("Seu saldo atual é de R$%.2f\nSaldo negativo",total);
}
