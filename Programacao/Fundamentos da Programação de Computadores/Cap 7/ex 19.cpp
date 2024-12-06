#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int matriz[8][6];
    float media = 0;
    int apoioContador = 0;

    for (int i = 0; i < 8; i++) {
        for (int u = 0; u < 6; u++) {
            matriz[i][u] = rand() % 100;
        }
    }

    for (int i = 0; i < 8; i++) {
        if (i % 2 == 0) {
            for (int u = 0; u < 6; u++) {
                media += matriz[i][u];
                apoioContador++;
            }
        }
    }

    media /= apoioContador;

    printf("A media das linhas pares da matriz e: %.2f\n", media);

    return 0;
}
