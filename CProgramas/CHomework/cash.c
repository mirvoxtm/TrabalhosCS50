#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float reais;
    do
    {
          reais = get_float("Quanto dinheiro é devido: ");
    }
    while (reais <= 0.0);

    int centavos = round(reais * 100); // Variável de Centavos Convertidos
    int centmin;
    int penny = 1;
    int nickels = 5;
    int dimes = 10;
    int quarters = 25;
    int total = 0; //Total de Moedas

    centmin = centavos;

    while (centmin >= quarters)
    {
        centmin = centmin - quarters;
        total++;
    }

    while (centmin >= dimes)
    {
        centmin = centmin - dimes;
        total++;
    }

    while (centmin >= nickels)
    {
        centmin = centmin - nickels;
        total++;
    }

    while (centmin >= penny)
    {
        centmin = centmin - penny;
        total++;
    }

    printf("%i\n", total);
}