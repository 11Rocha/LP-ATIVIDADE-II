#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idoma;

    printf("MENU IDOMAS:\n");
    printf("1 IDOMA INGLÊS:\n");
    printf("2 IDOMA ESPANHOL:\n");
    printf("3 IDOMA FRANCÊS:\n");
    printf("Informe o numro corespondete ao IDOMA:\n");
    scanf("%d", &idoma);
    system("cls");

    switch (idoma)
    {
    case 1:
        printf("welcome !");
        break;
    case 2:
        printf("sea bienvenido !");
        break;
    case 3:
        printf("accueillir !");
        break;

    default:
        break;
    }

    return 0;
}
