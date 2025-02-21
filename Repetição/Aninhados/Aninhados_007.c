#include <stdio.h>>

int main()
{
    int i, j;

    char letra;

    for (i = 1; i <= 5; i++)
    {
        letra = 'A'; // caracteres usa aspas simples

        for (j = 0; j <= i; j++)
        {
            printf("%c ", letra);
            letra++; // muda a letra que sera mostrada
        }
        printf("\n");
    }

    return 0;
}