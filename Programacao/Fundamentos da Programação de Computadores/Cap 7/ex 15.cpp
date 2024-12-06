#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int matriz[12][13];
    int maiorElemento;

    printf("Matriz inicial:\n");
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 13; j++) {
            matriz[i][j] = rand() % 100;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 12; i++) {
        maiorElemento = 0; 
        
        for (int j = 0; j < 13; j++) {
            if (matriz[i][j] > maiorElemento) {
                maiorElemento = matriz[i][j];
            }
        }

        if (maiorElemento > 0) { 
            for (int j = 0; j < 13; j++) {
                matriz[i][j] /= maiorElemento;
            }
        }
    }

    printf("\nMatriz modificada:\n");
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 13; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
