#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Pegue o Input do Usuário e atribua para a Variável Resposta
    string resposta = get_string("Por favor, insira seu nome: ");
    // Printe
    printf("Fala, %s!\n", resposta);
}