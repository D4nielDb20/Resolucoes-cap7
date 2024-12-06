#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int matriz[5][5];
    int vetor1[5] = {0}, vetor2[5] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 100;
            vetor1[i] += matriz[i][j]; 
            vetor2[j] += matriz[i][j];
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor da soma das linhas da matriz: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor da soma das colunas da matriz: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor2[i]);
    }

    return 0;
}
