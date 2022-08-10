#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int blocos = 1; // Espaços e Blocos
    int quebra; // Quebra de Linha
    int altura; // Altura do Usuário

    do
    {
        altura = get_int("Altura: ");
    }
    while(altura < 1 || altura > 8);

    for(quebra = 1; quebra <= altura; quebra++)
    {
        for (blocos = altura - blocos; blocos >= 1; blocos--)
            printf(" ");

        for(blocos = 1; blocos <= quebra; blocos++)
            printf("#");

        for(blocos = 1; blocos <= quebra; blocos++)
            printf("#");

        printf("\n");
    }
}


