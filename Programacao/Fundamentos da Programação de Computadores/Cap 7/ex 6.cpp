#include <stdio.h>

#define LINHAS 20
#define COLUNAS 10

int main() {
    int matriz[LINHAS][COLUNAS];
    int somaColunas[COLUNAS] = {0};

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < COLUNAS; j++) {
        for (int i = 0; i < LINHAS; i++) {
            somaColunas[j] += matriz[i][j];
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] *= somaColunas[j];
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
