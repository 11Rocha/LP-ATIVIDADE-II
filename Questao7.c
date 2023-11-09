#include <stdio.h>
#include <stdlib.h>

int main()
{

    int jogo;

    printf("MENU JOGO:\n");
    printf("1 - Novo jogo:\n");
    printf("2 - Carregar jogo:\n");
    printf("3 - Configurações:\n");
    printf("O QUE DESEJA FAZER:\n");
    scanf("%d", &jogo);
    system("cls");

    switch (jogo)
    {
    case 1:
        printf("1 - Novo jogo!\n");
        break;
    case 2:
        printf("2 - Carregar jogo !\n");
        break;
    case 3:
        printf("3 - Configurações!\n");
        break;

    default:
        break;
    }

    return 0;
}
