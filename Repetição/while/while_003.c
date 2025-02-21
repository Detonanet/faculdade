#include<stdio.h>

int main(){

    int num;// Variavel 

    printf("Digite um numero: ");// interação com o usuario 
    scanf("%d", &num);// Pegando o valor e adicionando a variavel.
    printf("\n"); // só para dar um espaço de uma linha 

    if (num > 9)
    {
        printf("O numero deve ser menor que %d para continuarmos\n\n\n", num); // mosta a informação para o usuario 
    } else
    {
        
        while (num <= 10) // fazendo o loop ate chegar no 10 
        {
            
            printf("%d\n", num); // mostra no terminal
            num++;// adicionei antes porque estava duplicando o primeiro numero 
            
        }

        printf("\n\n\n"); // só para dar um espaço de linhas 
    }
    
    

   
    return 0; 


}