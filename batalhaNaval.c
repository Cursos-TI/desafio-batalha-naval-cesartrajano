#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro [10][10];
    int i,j;

    for (size_t i = 0; i < 10; i++)
    {
    for (size_t j = 0; j < 10; j++)
    {
        tabuleiro[i][i]=0;
    }
    
        int linhaH=2;
        int colH=1;
        tabuleiro[linhaH][colH]=3;
        tabuleiro[linhaH][colH+1]=3;
        tabuleiro[linhaH][colH+2]=3;
        printf("--BATALHA NAVAL--\n\n");

        for (size_t i = 0; i < 10; i++)
        {
            /* code */for (size_t j = 0; j < 10; j++)
            {
                printf("%d",tabuleiro[i][i]);
            }
            printf("\n");
            
        }
        
    }
    
    
    
    

    return 0;

}