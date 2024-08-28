#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int num;
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%i",&num);

    if (num>10) printf("É MAIOR QUE 10!");
    else printf("NÃO É MAIOR QUE 10!");

}
