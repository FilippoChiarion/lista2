#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    float salario,vendas,comissao,bonus,total;
    printf("Salário fixo: R$ ");
    fflush(stdin);
    scanf("%f",&salario);
    printf("Valor das vendas efetuadas: R$ ");
    fflush(stdin);
    scanf("%f",&vendas);

    if (vendas<=1500)  {
            comissao = vendas*0.03;
            total = comissao + salario;
            printf("O salário total é de R$%.2f",total);
    }

    else {
            comissao = vendas*0.03;
        bonus = vendas*0.05;
    total = bonus + comissao + salario; printf("O salário total é de R$%.2f",total);
    }
}
