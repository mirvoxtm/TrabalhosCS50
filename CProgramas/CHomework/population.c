#include <stdio.h>
#include <cs50.h>

int main(void)
{
      // TODO: Solicite o valor inicial ao usuário
      int ini = 0;

      do {
      ini = get_int("Qual a quantidade de Pessoas Inicial? ");
      }
      while (ini < 9);

     // TODO: Solicite o valor final ao usuário
      int fin = 0;

     do {
      fin = get_int("Qual a quantidade Final? ");
     }
     while (fin <= ini);

     // TODO: Calcule o número de anos até o limite
     int anos = 0;
     while (ini < fin)
     {
        ini = ini + ((int)ini / 3) - ((int)ini / 4);
        anos++;
     }

     // TODO: Imprima o número de anos
    printf("Years: %i\n", anos);
}