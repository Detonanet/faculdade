#include <stdio.h>
/*
Desafio de Xadrez - MateCheck
Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
*/
int main()
{
    // Nível Novato - Movimentação das Peças
    // variaveis
    int bispo = 1;  // devera ir para casa 5
    int torre = 1;  // devera ir para casa 5
    int rainha = 8; // devera ir para casa
    int cavalo = 1; // devera ir para casa 2 para baixo 1 casa para esquerda

    int casa5 = 5;
    int casa2 = 2;
    int casa1 = 0;
    // int casa = 8;

    for (casa2 = 1; casa2 < 3; casa2++)
    {
        printf("Movimenta para casa %d\n ", casa2);
        if (casa2 == 2)
        {
            for ( casa1 = 1; casa1 < 2; casa1++)
            {
                printf("Movimenta para esquerda casa %d\n ", casa1);
            }
            
           
        }
        
    }

    while (bispo <= casa5)
    {
        printf("Bispo move para cima a direita, casa %d\n", bispo);
        bispo++;
    }

    while (torre <= casa5)
    {
        printf("Torre move para direita, casa %d\n", torre);
        torre++;
    }

    for ( rainha = 1; rainha < 8; rainha++)
    {
        printf("Rainha move para esquerda, casa %d\n", rainha);
    }

    return 0;
}