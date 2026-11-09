#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variavéis
    float salario, sliquido;
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    if(salario <= 100000)
    {
        printf("O seu salário é isento de IRT");
    } else {
        if (salario >= 100001 && salario <= 250000)
        {
            sliquido = salario*0.12;
            printf("O seu salário liquido é de: %f", sliquido);
        } else {
            if(salario >= 201000 && salario <= 500000)
            {
                sliquido = salario*0.15;
                printf("O seu salário liquido é de: %f", sliquido);
            } else {
                if (salario >= 500001 && salario <= 1000000)
                {
                    sliquido = salario*0.23;
                    printf("O seu salário liquido é de: %f", sliquido);
                } else {
                    if (salario >= 1000001)
                    {
                        sliquido = salario*0.08;
                        printf("O seu salário líquido é: %f", sliquido);
                    } else {
                        printf("Valor inválido");
                    }
                }
            }
        }
        
    }
}