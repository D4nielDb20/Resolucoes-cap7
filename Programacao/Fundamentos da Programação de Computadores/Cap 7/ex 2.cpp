 #include <stdio.h>

int main() {
    int matriz[2][4];
    int contagem_entre_12_20[2] = {0, 0};
    int soma_pares = 0;
    int qtd_pares = 0;
    float media_pares;

    printf("Digite os valores para preencher a matriz 2x4:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] >= 12 && matriz[i][j] <= 20) {
                contagem_entre_12_20[i]++;
            }

            if (matriz[i][j] % 2 == 0) {
                soma_pares += matriz[i][j];
                qtd_pares++;
            }
        }
    }

    if (qtd_pares > 0) {
        media_pares = (float)soma_pares / qtd_pares;
    } else {
        media_pares = 0;
    }

    printf("\nQuantidade de elementos entre 12 e 20 em cada linha:\n");
    for (int i = 0; i < 2; i++) {
        printf("Linha %d: %d elementos\n", i, contagem_entre_12_20[i]);
    }

    printf("Média dos elementos pares da matriz: %.2f\n", media_pares);

    return 0;
}
