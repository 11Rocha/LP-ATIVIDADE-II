#include <stdio.h>

int main()
{
    int numero;

    printf("DIGITE UM NUMERO INTEIRO POSITIVO: ");
    scanf("%d", &numero);

    // VERIFICAR SE NUMERO E POSITIVO.
    if (numero < 0)
    {
        printf("INCIRA UM NUMERO INTEIRO E POSITIVO.\n");
        return 1;
    }
    printf("CONTAGEM REGRECIVA A PARTIR DE %d:\n", numero);
    while (numero >= 0)
    {
        printf("%d\n", numero);
        numero--;
    }

    return 0;
}