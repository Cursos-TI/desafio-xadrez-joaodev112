#include <stdio.h>

int main(){

     //CÓDIGO DE MOVIMENTOS DA TORRE

    printf("TORRE\n");

    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

     //CÓDIGO DE MOVIMENTOS DO BISPO

    int bispo = 1;

    printf("\n");
    printf("BISPO\n");

    while (bispo <= 5)
    {
        printf("Cima Direita\n");
        bispo++;
    }

     //CÓDIGO DE MOVIMENTOS DA RAINHA

    int rainha = 1;

    printf("\n");
    printf("RAINHA\n");

    do
    {
       printf("Esquerda\n");
        rainha++;

    } while (rainha <= 8);

     //CÓDIGO DE MOVIMENTOS DO CAVALO
    
    printf("\n");
    printf("CAVALO\n");

    const int movimento = 2; // Movimento ocorrerá 2 vezes

    for (int cavalo = 1; cavalo <= movimento; cavalo++)
    {
        int passos = 1;
        while (passos <= 2) // 2 passos para baixo
        {
            printf("Baixo\n");
            passos++;
        }
        
        printf("Esquerda\n"); // 1 passo para a esquerda
    }
    
    return 0;
}