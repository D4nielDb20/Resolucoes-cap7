#include <stdio.h>

int main() {
    int matriz[6][3];
    int maior, menor;
    int linha_maior = 0, coluna_maior = 0;
    int linha_menor = 0, coluna_menor = 0;

    printf("Digite os valores para preencher a matriz 6x3:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                maior = menor = matriz[i][j];
                linha_maior = linha_menor = i;
                coluna_maior = coluna_menor = j;
            }

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha_menor = i;
                coluna_menor = j;
            }
        }
    }
    printf("\nMaior elemento: %d (Posição: Linha %d, Coluna %d)\n", maior, linha_maior, coluna_maior);
    printf("Menor elemento: %d (Posição: Linha %d, Coluna %d)\n", menor, linha_menor, coluna_menor);

    return 0;
}
