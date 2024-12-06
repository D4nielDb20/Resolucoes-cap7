#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int matriz[5][5];
    int apoioAcumulador = 0;

    for (int i = 0; i < 5; i++) {
        for (int u = 0; u < 5; u++) {
            matriz[i][u] = rand() % 100;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int u = 0; u < 5; u++) {
            if (matriz[i][u] > apoioAcumulador) {
                apoioAcumulador = matriz[i][u];
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        matriz[i][i] *= apoioAcumulador;
    }

    for (int i = 0; i < 5; i++) {
        for (int u = 0; u < 5; u++) {
            printf("%d ", matriz[i][u]);
        }
        printf("\n");
    }

    return 0;
}
