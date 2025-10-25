#include <stdio.h>

// Desafio Batalha Naval - MateCheck

// Nível Novato
void nivelNovato() {
    printf("--- Nível Novato ---\\n");
    int tabuleiro[5][5] = {0};

    // Posicionando um navio horizontal de 3 posições
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;
    tabuleiro[1][3] = 1;

    // Posicionando um navio vertical de 3 posições
    tabuleiro[2][4] = 1;
    tabuleiro[3][4] = 1;
    tabuleiro[4][4] = 1;

    printf("Coordenadas do navio horizontal:\\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1 && (i == 1 && (j >= 1 && j <= 3))) {
                printf("[%d][%d]\\n", i, j);
            }
        }
    }

    printf("\\nCoordenadas do navio vertical:\\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1 && (j == 4 && (i >= 2 && i <= 4))) {
                printf("[%d][%d]\\n", i, j);
            }
        }
    }
    printf("\\n");
}

// Nível Aventureiro
void nivelAventureiro() {
    printf("--- Nível Aventureiro ---\\n");
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
    printf("Tabuleiro de Batalha Naval (Nível Aventureiro):\\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\\n");
    }
    printf("\\n");
}

// Nível Mestre
void habilidadeCone(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }
    matriz[0][2] = 1;
    matriz[1][1] = 1;
    matriz[1][2] = 1;
    matriz[1][3] = 1;
    matriz[2][0] = 1;
    matriz[2][1] = 1;
    matriz[2][2] = 1;
    matriz[2][3] = 1;
    matriz[2][4] = 1;
}

void habilidadeCruz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }
    matriz[0][2] = 1;
    matriz[1][0] = 1;
    matriz[1][1] = 1;
    matriz[1][2] = 1;
    matriz[1][3] = 1;
    matriz[1][4] = 1;
    matriz[2][2] = 1;
}

void habilidadeOctaedro(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }
    matriz[0][2] = 1;
    matriz[1][1] = 1;
    matriz[1][2] = 1;
    matriz[1][3] = 1;
    matriz[2][2] = 1;
}

void imprimirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\\n");
    }
}

void nivelMestre() {
    printf("--- Nível Mestre ---\\n");
    int tabuleiro[5][5];

    printf("Habilidade em Cone:\\n");
    habilidadeCone(tabuleiro);
    imprimirMatriz(tabuleiro);

    printf("\\nHabilidade em Cruz:\\n");
    habilidadeCruz(tabuleiro);
    imprimirMatriz(tabuleiro);

    printf("\\nHabilidade em Octaedro:\\n");
    habilidadeOctaedro(tabuleiro);
    imprimirMatriz(tabuleiro);
    printf("\\n");
}

int main() {
    nivelNovato();
    nivelAventureiro();
    nivelMestre();

    return 0;
}
