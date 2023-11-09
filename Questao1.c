#include <stdio.h>
#include <stdlib.h>

int main()
{

    int temperatura;

    printf("Informe a Temperatura:\n");
    scanf("%d", &temperatura);
    system("cls");

    printf("#### SISTEMA CLIMATIZAÇÃO DE JOGO: ####\n");

    if (temperatura >= 25)
    {
        printf("O Dia esta Ensolarado!\n");
    }
     if (temperatura >= 24 || temperatura >= 16)
    {
        printf("O Dia esta Nublado!\n");
    }
    if (temperatura <= 15)
    {
        printf("O Dia esta Chuvoso!\n");
    }
   
    
    

    return 0;
}
