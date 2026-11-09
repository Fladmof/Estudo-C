#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int n = printf("Valor retornado: %d", printf("Qualquer coisa\n"));
    
    /*
    printf("----------------------------------\n");
    printf("         Menu Unitel");
    printf("\n----------------------------------\n");
    printf("1 - Cadastrar \n2 - Login  \n3 - Imprimir\n");
    printf("\n----------------------------------\n");

    int digito;
    printf("Digite a sua opção: ");
    scanf("%d", &digito);
    if(digito == 1) {
        printf("Bem-vindo a aba de CADASTRO");
    } else if(digito == 2) {
        printf("Bem-vindo a aba de LOGIN");
    } else if(digito == 3) {
        printf("Bem-vindo a aba de IMPRESSÃO");
    } else {
        printf("Comando Inválido");
    }
    */

    /*
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    int texto;
    texto = printf("O valor armazenado na variável é: %d", valor);
    */

    //printf("\nPressione qualquer tecla para continuar");
    //getchar();

    /*
    float num;

    printf("Digite um valor: ");
    scanf("%f", &num);
    printf("%.2f", num);
    */
    //Estruturando o cabeçalho
    printf("--------------------------");
    printf("\n   Formulário de Cadastro");
    printf("\n--------------------------\n");
    //Definindo as variáveis
    //sexo, idade, peso e altura
    char sexo;
    float altura;
    int idade;
    float peso;

    printf("Digite as suas informações pessoais(sexo(eM), altura, idade e peso): ");
    scanf("%c%f%d%f", &sexo, &altura, &idade, &peso);
    printf("As suas informações são: \nSexo: %c \nAltura: %f \nIdade: %d \nPeso: %f", sexo, altura, idade, peso);

    char letra;
    //Criando a lógica para analisar os dados do usuário
    /*printf("Digite o seu nome: ");
    scanf("%c", &nome[20]);
    printf("Digite a tua altura: ");
    scanf("%f", &altura);
    printf("Digite a tua idade: ");
    scanf("%d", &idade);
    printf("As suas informações pessoais são as seguintes: \n");
    int nomeA = for ( i = 0; i < nome[20]; i++){
        printf(nome[20]);
    };
    /*if(!nome) {
        printf("Erro! Nome inválido");
    } else if (!altura) {
        printf("Erro! Altura inválida");
    } else if (!idade) {
        printf("Erro! Idade inválida");
    } 
    printf("Nome: %c\n", nomeA);
    printf("Altura: %.1f\n", altura);
    printf("idade: %d\n", idade);
    */
/*
    printf("Digite uma letra: \n");
    letra = fgetc(stdin);
    printf("A letra que tu digitaste, foi: %c \n",letra);
*/

    //Como Digitar vários valores em simultâneo

    /*
    int n1, n2, n3;

    printf("Digite três números: ");
    scanf("%d%d%d", &n1, &n2, &n3 );

    printf("O números digitados foram: %i, %i e %i", n1, n2, n3);
    */
    printf("\nPressione qualquer tecla para continuar");
    getchar();


    return 0;
}