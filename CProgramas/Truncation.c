#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Número do Usuário
    int x = get_int("x: ");
    int y = get_int("y: ");

    // Divida os Números
    float z = (float) x / (float) y;

    // Printe o resultado.
    printf("%f\n", z);

}