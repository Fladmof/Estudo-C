#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definindo variáveis
    float area, raio; 
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = 3.14*raio*raio;
    printf("O valor da área é: %.2f", area,"cm²");
}