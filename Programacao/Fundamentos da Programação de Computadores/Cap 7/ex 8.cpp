#include <stdio.h>

#define LINHAS 3
#define COLUNAS 8

int main() {
    int A[LINHAS][COLUNAS];
    int B[LINHAS][COLUNAS];
    int soma[LINHAS][COLUNAS];
    int diferenca[LINHAS][COLUNAS];

    printf("Preencha a matriz A (3x8):\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Preencha a matriz B (3x8):\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            soma[i][j] = A[i][j] + B[i][j];
            diferenca[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("\nMatriz Soma:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", soma[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Diferença:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", diferenca[i][j]);
        }
        printf("\n");
    }

    return 0;
}
