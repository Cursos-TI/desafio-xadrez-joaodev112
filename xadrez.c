#include <stdio.h>

/// ==========================
/// TORRE (recursiva - direita)
/// ==========================
void torre(int passos) {
    if (passos == 0) return;

    printf("Direita\n");
    torre(passos - 1);
}

/// ==========================
/// BISPO (recursiva + loops aninhados)
/// ==========================
void moverBispo(int vertical, int horizontal, int passos) {
    if (passos == 0) return;

    printf("Cima Direita\n");
    moverBispo(vertical - 1, horizontal + 1, passos - 1);
}

void bispo() {
    int maxVertical = 5;
    int maxHorizontal = 5;

    for (int v = maxVertical; v > 0; v--) {
        for (int h = maxHorizontal; h > 0; h--) {
            printf("Início do Bispo em (%d, %d):\n", v, h);
            moverBispo(v, h, 5); // 5 passos na diagonal
            printf("\n");
            break; // Apenas uma posição inicial para exemplo
        }
    }
}

/// ==========================
/// RAINHA (recursiva - esquerda)
/// ==========================
void moverRainhaEsquerda(int passos) {
    if (passos == 0) return;

    printf("Esquerda\n");
    moverRainhaEsquerda(passos - 1);
}

void rainha() {
    printf("Movimento da Rainha:\n");
    moverRainhaEsquerda(8);  // Rainha anda 8 casas para a esquerda
    printf("\n");
}

/// ==========================
/// CAVALO (loops aninhados e controle de fluxo)
/// ==========================
void cavalo() {
    const int movimentos = 2; // Movimentos em L

    for (int i = 1; i <= movimentos; i++) {
        for (int vertical = 1; vertical <= 2; vertical++) { // 2 passos para cima
            if (i == 2 && vertical == 2) {
                // Exemplo de uso do continue
                continue;
            }
            printf("Cima\n");
        }

        for (int horizontal = 1; horizontal <= 1; horizontal++) { // 1 passo para a direita
            printf("Direita\n");
            break; // Exemplo de uso do break
        }

        printf("\n"); // Separação entre movimentos
    }
}

/// ==========================
/// FUNÇÃO PRINCIPAL
/// ==========================
int main() {
    printf("==== Movimento da Torre ====\n");
    torre(5); // Torre anda 5 casas para a direita
    printf("\n");

    printf("==== Movimento do Bispo ====\n");
    bispo(); // Bispo se move 5 casas na diagonal
    printf("\n");

    printf("==== Movimento da Rainha ====\n");
    rainha(); // Rainha se move 8 vezes para a esquerda
    printf("\n");

    printf("==== Movimento do Cavalo ====\n");
    cavalo(); // Cavalo executa 2 movimentos em "L"
    printf("\n");

    return 0;
}