#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);
const int TOTAL = 3;

int main(void)
{
    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
    int soma = 0;
    for (int i = 0; i < length; i++)
    {
        soma += soma + array[i];
    }
    return soma / (float)length;
}