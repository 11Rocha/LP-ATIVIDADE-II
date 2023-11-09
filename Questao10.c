#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1;
    float n2;
    float resultado;
    char operacao;

    printf("digite o valor do primeiro número:\n");
    scanf("%f", &n1);
   // system(“cls”);

    printf("digite o valor do segundo número:\n");
    scanf("%f", &n2);
    //system(“cls”);

fflush(stdin);
    printf("digite o simbolo da operação que deseja utilizar:\n");
    scanf ("%c", &operacao);
    //system(“cls”);

    switch (operacao)
    {
    case '+':
        resultado = n1 + n2;
        break;
    case '-':
        resultado = n1 - n2;
        break;
    case '*':
        resultado = n1 * n2;
        break;
    case '/':
        resultado = n1 / n2;
        break;
    default:
        printf("opção invalida");
        break;
    }
 
    printf("\nprimeiro número: %.1f \n", n1);
    printf("segundo número: %.1f \n", n2);
    printf("noperação escolhida: %c \n", operacao);
    printf("resultado: %.1f \n", resultado);
    return 0;
}