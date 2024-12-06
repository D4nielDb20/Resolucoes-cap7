#include <stdio.h>

#define LINHAS_M 4
#define COLUNAS_M 6
#define LINHAS_N 6
#define COLUNAS_N 4

int main() {
    int M[LINHAS_M][COLUNAS_M];
    int N[LINHAS_N][COLUNAS_N];
    int soma[LINHAS_M][COLUNAS_N] = {0};

    printf("Preencha a matriz M (4x6):\n");
    for (int i = 0; i < LINHAS_M; i++) {
        for (int j = 0; j < COLUNAS_M; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    printf("Preencha a matriz N (6x4):\n");
    for (int i = 0; i < LINHAS_N; i++) {
        for (int j = 0; j < COLUNAS_N; j++) {
            scanf("%d", &N[i][j]);
        }
    }

    for (int i = 0; i < LINHAS_M; i++) {
        for (int j = 0; j < COLUNAS_N; j++) {
            int somaLinhaM = 0, somaColunaN = 0;

            for (int k = 0; k < COLUNAS_M; k++) {
                somaLinhaM += M[i][k];
            }

            for (int k = 0; k < LINHAS_N; k++) {
                somaColunaN += N[k][j];
            }

            soma[i][j] = somaLinhaM + somaColunaN;
        }
    }

    printf("\nMatriz resultante:\n");
    for (int i = 0; i < LINHAS_M; i++) {
        for (int j = 0; j < COLUNAS_N; j++) {
            printf("%d\t", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
