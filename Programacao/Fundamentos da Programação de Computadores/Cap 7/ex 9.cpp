#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    float matriz[LINHAS][COLUNAS];
    float valor, matrizResultante[LINHAS][COLUNAS];

    printf("Preencha a matriz 3x3 com números reais:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Digite um número para multiplicar pela matriz: ");
    scanf("%f", &valor);

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizResultante[i][j] = matriz[i][j] * valor;
        }
    }

    printf("\nMatriz resultante após a multiplicação:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%.2f\t", matrizResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}
