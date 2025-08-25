#include <stdio.h>

int main(){

    // CÓDIGO DE MOVIMENTOS DA TORRE

    printf("TORRE\n");

    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

    // CÓDIGO DE MOVIMENTOS DO BISPO

    int bispo = 1;

    printf("BISPO\n");

    while (bispo <= 5)
    {
        printf("Cima Direita\n");
        bispo++;
    }

    // CÓDIGO DE MOVIMENTOS DA RAINHA

    int rainha = 1;

    printf("RAINHA\n");

    do
    {
        printf("Esquerda\n");
        rainha++;

    } while (rainha <= 8);
    
    return 0;
}