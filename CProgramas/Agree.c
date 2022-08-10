#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char resp = get_char("Você quer sair? (S/n) ");
    if (resp == 'S' || resp == 's')
    {
        printf("Saindo do Programa.\n");
    }
    else if (resp == 'n' || resp == 'N')
    {
        printf("Não é tu que cria as regras aqui, comédia.\n");
    }
    else {
        printf("Carácteres não detectados, saindo mesmo assim.\n");
    }
}