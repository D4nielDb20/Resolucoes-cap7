#include <stdio.h>

#define TAMANHO 5

int main() {
    int matriz[TAMANHO][TAMANHO];
    int somaLinha4 = 0, somaColuna2 = 0, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0, somaTotal = 0;

    printf("Preencha a matriz 5x5 com numeros inteiros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (i == 3) {
                somaLinha4 += matriz[i][j];
            }

            if (j == 1) {
                somaColuna2 += matriz[i][j];
            }

            if (i == j) {
                somaDiagonalPrincipal += matriz[i][j];
            }

            if (i + j == TAMANHO - 1) {
                somaDiagonalSecundaria += matriz[i][j];
            }

            somaTotal += matriz[i][j];
        }
    }

    printf("\nSoma dos elementos da linha 4: %d\n", somaLinha4);
    printf("Soma dos elementos da coluna 2: %d\n", somaColuna2);
    printf("Soma dos elementos da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma dos elementos da diagonal secundária: %d\n", somaDiagonalSecundaria);
    printf("Soma de todos os elementos da matriz: %d\n", somaTotal);

    return 0;
}
