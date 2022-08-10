#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Argumento Faltando\n");
        return 1;
    }
    printf("olá, %s\n", argv[1]);
    return 0;
}