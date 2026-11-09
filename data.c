#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Digite a data(dia, mês, ano): ");
    int dia, mes, ano, valor;
    scanf("%d%d%d", &dia, &mes, &ano);

    if(mes == 01 && mes == 03 && mes == 05 && mes == 07 && mes == 08 && mes == 10 && mes == 12)
    {
        valor = dia - 31;
        printf("Faltam %d para o mês terminar", valor);
    } else {
        if(mes == 05 && mes == 06 && mes == 09 && mes == 11 )
        {

        }
    }
        

}