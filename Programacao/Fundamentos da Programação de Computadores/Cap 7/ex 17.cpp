#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int matriz[10][10];
    float media = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 10; i++) {
        media += matriz[i][i];
    }
    media /= 10;

    printf("Matriz:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA media da diagonal principal da matriz e: %.2f\n", media);

    return 0;
}
