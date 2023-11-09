#include <stdio.h>
#include <stdlib.h>

int main()
{

    int produto;

    printf("MENU PRODUTOS:\n");
    printf("1 CAMISETAS:\n");
    printf("2 CALCAS:\n");
    printf("3 SAPATOS:\n");
    printf("Informe o numro corespondete ao PRODUTO:\n");
    scanf("%d", &produto);
    system("cls");

    //(1 - Camiseta, 2 - Calça, 3 - Sapato).

    switch (produto)
    {
    case 1:
        printf("1 - Camiseta !\n");
        printf("VALOR DA UNIDADE:\n");
        printf("R$: 120.00 \n");
        break;
    case 2:
        printf("2 - Calça !\n");
        printf("VALOR DA UNIDADE:\n");
        printf("R$: 150.00 \n");
        break;
    case 3:
        printf("3 - Sapato !\n");
        printf("VALOR DA UNIDADE:\n");
        printf("R$: 390.00 \n");
        break;

    default:
        break;
    }

    return 0;
}
