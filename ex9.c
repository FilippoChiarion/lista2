#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int semanal = 40;
    int horas;
    float salario,extra,total;

    printf("Horas trabalhadas em um m�s: ");
    fflush(stdin);
    scanf("%i",&horas);
    printf("Sal�rio por hora: ");
    fflush(stdin);
    scanf("%f",&salario);

    if (horas>40){  extra = (horas-40)*salario*1.5;
                    total = (salario * 40) + extra;
        printf("O sal�rio � de R$%.2f",total);
    }
    else { total = salario * horas;
            printf("O sal�rio � de R$%.2f",total);
    }

}
