#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("Qual seu primeiro número? ");
    long y = get_long("Qual seu segundo número? ");

    printf("%li\n", x + y);
}