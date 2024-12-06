#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    float matriz[LINHAS][COLUNAS];
    float valor, matrizResultante[LINHAS][COLUNAS];

    printf("Preencha a matriz 3x3 com n�meros reais:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Digite um n�mero para multiplicar pela matriz: ");
    scanf("%f", &valor);

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizResultante[i][j] = matriz[i][j] * valor;
        }
    }

    printf("\nMatriz resultante ap�s a multiplica��o:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%.2f\t", matrizResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}
