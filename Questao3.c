#include <stdio.h>

int main()
{

    int nota;

    printf("Informe a Nota do Aluno:\n");
    scanf("%d", &nota);

    if (nota >= 9)
    {
        printf("Excelente!\n");
    }
    if (nota <= 8.9)
    {
        printf("Nota Boa!\n");
    }
    if (nota <= 6.9)
    {
        printf("Nota Rasoavel!\n");
    }
    if (nota <= 4.9)
    {
        printf("Nota Insuficiente!\n");
    }

    return 0;
}
