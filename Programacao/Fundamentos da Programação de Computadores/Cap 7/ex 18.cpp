#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int matriz[5][5];
    float media = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 5; i++) {
        media += matriz[i][4 - i];
    }
    media /= 5;

    printf("Media da diagonal secundaria da matriz: %.2f\n", media);

    return 0;
}
