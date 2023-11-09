#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int dia;
    float valorDcompra = 0;
    float desconto;
    float valorApagar;

    printf(" ######*MENU DE DIAS DA SEMANA:*######\n");
    printf("DOMINGO '1' DIA:\n ");
    printf("SEGUNDA-FEIRA '2' DIA:\n");
    printf("TERÇA-FEIRA '3' DIA:\n");
    printf("QUARTA-FEIRA '4' DIA:\n");
    printf("QUINTA-FEIRA '5' DIA:\n");
    printf("SEXTA-FEIRA '6' DIA:\n");
    printf("SABADO '7' DIA:\n");

    printf("Informe o Valor da Compra R$:\n");
    scanf("%f", &valorDcompra);

    printf("Informe o Dia da Semana:\n");
    scanf("%d", &dia);
    system("cls");

    switch (dia)
    {
    case 1:
        
        if (valorDcompra > 100)
        {
        desconto = valorDcompra * 0.15;
        }
        
        valorApagar = (valorDcompra - desconto);
        printf("Domingo:\n");
        printf("Valor Da Compra R$:%.2f\n", valorDcompra);
        printf("Valor Do Desconto R$:%.2f\n", desconto);
        printf("Total a Pagar R$:%.2f\n", valorApagar);

        break;
    case 2:

        if (valorDcompra > 100)
        {
        desconto = valorDcompra * 0.10;
        }
        valorApagar = (valorDcompra - desconto);
        printf("Segunda-Feira:\n");
        printf("Valor Da Compra R$:%.2f\n", valorDcompra);
        printf("Valor Do Desconto R$:%.2f\n", desconto);
        printf("Total a Pagar R$:%.2f\n", valorApagar);

        break;
    case 3:
        
        if (valorDcompra > 100)
        {
        desconto = valorDcompra * 0.10;
        }
        valorApagar = (valorDcompra - desconto);
        printf("Terça-Feira:\n");
        printf("Valor Da Compra R$:%.2f\n", valorDcompra);
        printf("Valor Do Desconto R$:%.2f\n", desconto);
        printf("Total a Pagar R$:%.2f\n", valorApagar);
        break;
    case 4:
        
        if (valorDcompra > 100)
        {
        desconto = valorDcompra * 0.10;
        }
        valorApagar = (valorDcompra - desconto);
        printf("Quarta-Feira:\n");
        printf("Valor Da Compra R$:%.2f\n", valorDcompra);
        printf("Valor Do Desconto R$:%.2f\n", desconto);
        printf("Total a Pagar R$:%.2f\n", valorApagar);
        break;
    case 5:

        if (valorDcompra > 100)
        {
        desconto = valorDcompra * 0.10;
        }
        valorApagar = (valorDcompra - desconto);
        printf("Quinta-Feira:\n");
        printf("Valor Da Compra R$:%.2f\n", valorDcompra);
        printf("Valor Do Desconto R$:%.2f\n", desconto);
        printf("Total a Pagar R$:%.2f\n", valorApagar);
        break;
    case 6:

        if (valorDcompra > 100)
        {
        desconto = valorDcompra * 0.10;
        }
        valorApagar = (valorDcompra - desconto);
        printf("Sexta-Feira:\n");
        printf("Valor Da Compra R$:%.2f\n", valorDcompra);
        printf("Valor Do Desconto R$:%.2f\n", desconto);
        printf("Total a Pagar R$:%.2f\n", valorApagar);
        break;
    case 7:

        if (valorDcompra > 100)
        {
        desconto = valorDcompra * 0.15;
        }
        valorApagar = (valorDcompra - desconto);
        printf("Sabado:\n");
        printf("Valor Da Compra R$:%.2f\n", valorDcompra);
        printf("Valor Do Desconto R$:%.2f\n", desconto);
        printf("Total a Pagar R$:%.2f\n", valorApagar);
        break;

    default:

        
        break;
    }

   
    return 0;
}
