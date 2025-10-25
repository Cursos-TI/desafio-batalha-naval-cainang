#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Nível Aventureiro

int main() {
    // Tabuleiro 10x10
    int tabuleiro[10][10] = {0};

    // Posicionamento de um navio horizontal (3 posições)
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Posicionamento de um navio vertical (4 posições)
    tabuleiro[3][5] = 3;
    tabuleiro[4][5] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;

    // Posicionamento de um navio diagonal (3 posições)
    tabuleiro[8][1] = 3;
    tabuleiro[7][2] = 3;
    tabuleiro[6][3] = 3;

    // Posicionamento de outro navio diagonal (5 posições)
    tabuleiro[2][8] = 3;
    tabuleiro[3][7] = 3;
    tabuleiro[4][6] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][4] = 3;

    // Exibição completa do tabuleiro
    printf("Tabuleiro de Batalha Naval (Nível Aventureiro):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
