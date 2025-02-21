#include <stdio.h>

int main()
{

    // Carta 1, variaveis definidas
    char Carta1Estado[50] = "São Paulo";
    char Carta1CodCarta[50] = "A01";
    char Carta1CidadeNome[50] = "Campinas";
    int Carta1Populacao = 1139;
    float Carta1area = 794.571;
    float Carta1Pib =  1627842.100;
    int Carta1turistico = 10;

    // Parte 2: calculando as variaveis 
    float  Carta1DensidadePopulacional =  Carta1Populacao/Carta1area;
    float Carta1PibPerCapita = Carta1Pib/Carta1Populacao;


    // Carta 2, variaveis definidas
    char Carta2Estado[50] = "Minas Gerais";
    char Carta2CodCarta[50] = "B02";
    char Carta2CidadeNome[50] = "Belo Horizonte";
    int Carta2Populacao = 2315;
    float Carta2area = 331.354;
    float Carta2Pib = 80019621.58;
    int Carta2turistico = 26;

    // Parte 2: calculando as variaveis 
    float  Carta2DensidadePopulacional =  Carta2Populacao / Carta2area;
    float Carta2PibPerCapita = Carta2Pib/Carta2Populacao;


    
    printf("---------- Informação da carta 1 ---------\n");

    printf("Estado: %s\n",Carta1Estado);
    printf("Codigo: %s\n",Carta1CodCarta);
    printf("Cidade: %s\n",Carta1CidadeNome);
    printf("População: %d\n",Carta1Populacao);
    printf("Área: %.2f km²\n",Carta1area);
    printf("PIB: %.2f bilhões de reais\n",Carta1Pib);
    printf("Numeros de Pontos Turisticos: %d\n",Carta1turistico);
    printf("Densidade Populacional : %.2f hab/km²\n",Carta1DensidadePopulacional);
    printf("PIB per capita: %.2f reais\n",Carta1PibPerCapita);

    printf("------------------------------------------\n\n");

    printf("---------- Informação da carta 2 ---------\n");

    printf("Estado: %s\n",Carta2Estado);
    printf("Codigo: %s\n",Carta2CodCarta);
    printf("Cidade: %s\n",Carta2CidadeNome);
    printf("População: %d\n",Carta2Populacao);
    printf("Área: %.2f km²\n",Carta2area);
    printf("PIB: %.2f bilhões de reais\n",Carta2Pib);
    printf("Numeros de Pontos Turisticos: %d\n",Carta2turistico);
    printf("Densidade Populacional : %.2f hab/km²\n",Carta2DensidadePopulacional);
    printf("PIB per capita: %.2f reais\n",Carta2PibPerCapita);

    printf("------------------------------------------\n\n");


    printf("---------- Fazendo a comparação entre as duas cartas ---------\n");

    // Parte 3: Verificando qual carta tem o PIB maior 
  /*  if (Carta1Pib > Carta2Pib)
    {
        printf(" Carta 1 tem o maior PIB\n");
    } else if (Carta1Pib < Carta2Pib)
    {
        printf(" Carta 2 tem o maior PIB\n");
    }
    
    // Parte 4: Determinar a carta vencedora:
    if (Carta1turistico > Carta2turistico)
    {
        printf(" Carta 1 e a vencedora por ter mais pontos turisticos\n");
    } else 
    {
        printf(" Carta 2 e a vencedora por ter mais pontos turisticos\n");
    }

    if (Carta1DensidadePopulacional < Carta2DensidadePopulacional)
    {
        printf(" Carta 1 e a vencedora por ter menor densidade populacional\n");
    } else 
    {
        printf(" Carta 2 e a vencedora por ter menor densidade populacional\n");
    }

*/

  //  printf("Densidade Populacional %f\n: ",Carta1DensidadePopulacional); // Cata 1 Densidade Populacional
   // printf("PIB per capita %.2f\n: ",Carta1PibPerCapita); // Cata 1 PIB per capita




    return 0;
}