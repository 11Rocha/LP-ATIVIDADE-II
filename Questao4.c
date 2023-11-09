#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int idade;


printf("Informe sua Idade:\n");
scanf("%d", &idade);
system("cls");

if (idade >= 18)
{
    printf("Acesso Permitido!");
}
else
{
    printf("Acesso Negado!");
}
















    return 0;
}