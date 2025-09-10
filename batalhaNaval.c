#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[5][5] = {0};

    int col = 1;
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][col] = 1;
        printf("Navio vertical: (%d,%d)\n", i, col);
    }

    int row = 3;
    for (int j = 2; j <= 4; j++) {
        tabuleiro[row][j] = 1;
        printf("Navio horizontal: (%d,%d)\n", row, j);
    }

    printf("\nTabuleiro 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
