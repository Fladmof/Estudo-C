#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definindo variáveis
    int ano, resultado1, resultado2;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    resultado1 = ano % 4;
    resultado2 = ano % 100;

    if(resultado1 == 0 && resultado2 == 0 ) {
        printf("O ano é um ano bissexto");
    } else {
        
    }
}
