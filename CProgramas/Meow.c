#include <stdio.h>
#include <cs50.h>

// Protótipo, define a função e impede o compilador de dar pau.
// Define a função
void meow(int n);


// Executa o Programa
int main(void)
{
        int n = get_int("Insira o número para repetir: ");
        meow(n);
}

// Cria uma função (sendo esta, meow) do zero:
void meow(int n)
{
    for (int i = 0; i < n; i++)
    printf("meow\n");
}