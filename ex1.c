#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int num;
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%i",&num);

    if (num>10) printf("� MAIOR QUE 10!");
    else printf("N�O � MAIOR QUE 10!");

}
