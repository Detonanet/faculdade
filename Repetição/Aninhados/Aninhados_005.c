#include <stdio.h>
int main()
{
    // KKK o tabuleiro do Candy Crush ja esta pronto kkkkk
    int a = 1;
    while (a <= 7)
    {
        int b = 1;
        while (b <= 7)
        {
            //  printf("a%d , b%d\t", a , b); // nomeia cada casa da matrix
            // usei o switch para montar o tabuleiro, agora o xadrez irá ter base kkkk
            switch (a * 10 + b)//a multiplicação a * 10 + b é uma forma simples de criar um código único para cada par, ja que a birosca do switch so aceita verificação unica
            {
            case 22:
            case 23:
            case 24:
            case 25:
            case 32:
            case 36:
            case 42:
            case 46:
            case 52:
            case 56:
            case 62:
            case 63:
            case 64:
            case 65:
                printf("%3s", "*"); // para formar a letra D de Detonanet kkkk
                break;
            default:
                printf("%3s", ""); // os lugares que não será preenchidos
            }

            b++;
        }
        printf("\n"); // para pular a linha
        a++;
    }
    printf("\n\n");
    return 0;
}