#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis Actuais
    int anoA, mesA , diaA, horasA, minA, segA, milA;

    //Variáveis de Nascimento
    int anoN, mesN, diaN, horasN, minN, segN, milN;
    
    //Variáveis dos resultados
    int idade, mes, dia, hora, min, seg, mil;

    //Solicitando as informações actuais
    printf("Digite as informações da data actual\n");
    printf("ANO actual: ");
    scanf("%d", &anoA);
    printf("MÊS actual: ");
    scanf("%d", &mesA);
    printf("DIA actual: ");
    scanf("%d", &diaA);
    printf("HORA actual: ");
    scanf("%d", &horasA);
    printf("MINUTO actual: ");
    scanf("%d", &minA);
    printf("SEGUNDOS actuais: ");
    scanf("%d", &segA);
    printf("MILÉSIMOS actuais:");
    scanf("%d", &milA);

    //Solicitando as informações de nascimento
    printf("\nDigite as informações da sua data de nasciemnto\n");
    printf("ANO de Nascimento: ");
    scanf("%d", &anoN);
    printf("MÊS de Nascimento: ");
    scanf("%d", &mesN);
    printf("DIA de Nascimento: ");
    scanf("%d", &diaN);
    printf("HORA de Nascimento: ");
    scanf("%d", &horasN);
    printf("MINUTO de Nascimento: ");
    scanf("%d", &minN);
    printf("SEGUNDOS de Nascimento: ");
    scanf("%d", &segN);
    printf("MILÉSIMOS de Nascimento: ");
    scanf("%d", &milN);

    //Calculando as diferenças entre as informações
    idade = anoA - anoN;
    mes = mesA - mesN;
    dia = diaA - diaN;
    hora = horasA - horasN;
    min = minA -minN;
    seg = segA - segN;
    mil = milA - milN;

    if(anoN < anoA )
    {
        if(mesA > mesN)
        {
            
            if(diaN > diaA) 
            {
                
            } else {

            }
        }else {
            idade = anoA - anoN - 1;
            printf("As suas informações são as seguintes\n");
            printf("Idade: %d\n anos", idade);
            printf("Meses: %d\n", mes);
            printf("Dias: %d\n", dia);
        }
    } else {
        printf("Não podemos calcular a idade de quem ainda não nasceu");
    }
    return 0;
}