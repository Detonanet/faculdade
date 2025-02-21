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

    int casa5 = 5;
    //int casa = 8;

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

    for (size_t i = 0; i < rainha; i++)
    {
        printf("Rainha move para esquerda, casa %d\n", i);
    }
 
    return 0;
}