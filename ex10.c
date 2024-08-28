#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    char nome[30],sexo;
    float altura,mpeso,fpeso;
    printf("Nome: ");
    fflush(stdin);
    gets(nome);
    printf("Altura: ");
    fflush(stdin);
    scanf("%f",&altura);
    printf("Sexo (M) ou (F) : ");
    fflush(stdin);
    scanf("%c",&sexo);

    mpeso = 72.7 * altura - 58;
    fpeso = 62.1 * altura - 44.7;

    switch(sexo){
    case 'M': printf("MSeu peso ideal é de %.2f Kg",mpeso);break;
    case 'F': printf("FSeu peso ideal é de %.2f Kg",fpeso);break;
    default: printf("Erro, coloque M ou F para \"Sexo\"");
    }
}
