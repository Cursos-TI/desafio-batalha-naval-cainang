#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[5][5] = {0};

    // Posicionando um navio horizontal de 3 posições
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;
    tabuleiro[1][3] = 1;

    // Posicionando um navio vertical de 3 posições
    tabuleiro[2][4] = 1;
    tabuleiro[3][4] = 1;
    tabuleiro[4][4] = 1;

    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1 && (i == 1 && (j >= 1 && j <= 3))) {
                printf("[%d][%d]\n", i, j);
            }
        }
    }

    printf("\nCoordenadas do navio vertical:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1 && (j == 4 && (i >= 2 && i <= 4))) {
                printf("[%d][%d]\n", i, j);
            }
        }
    }

    return 0;
}