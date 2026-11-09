#include <stdio.h>
#include <stdlib.h>

int main()
{
    int datan, datac, idade;
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &datan);
    printf("Digite o ano actual: ");
    scanf("%d", &datac);

    idade = datac - datan;
    printf("A sua idade actual é de: %d", idade);
}