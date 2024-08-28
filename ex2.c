#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int num;
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%i",&num);

    if (num>=0) printf("positivo");
    else printf("negativo");


}
