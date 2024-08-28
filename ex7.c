#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int n1,n2;
    printf("Valor 1: ");
    fflush(stdin);
    scanf("%i",&n1);
    printf("Valor 2: ");
    fflush(stdin);
    scanf("%i",&n2);

    if (n1<n2) printf("%i %i",n1,n2);
    else printf("%i %i",n2,n1);
}
