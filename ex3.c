#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int macas;
    float total;
    printf("Quantas ma�as deseja comprar? ");
    fflush(stdin);
    scanf("%i",&macas);
    total = macas*1.3;
    if (macas<12) {
            total = macas*1.3;
        printf("Custo total � de R$%.2f",total);
    }
    else{

        printf("Custo total � de R$%i",macas);
    }
}
