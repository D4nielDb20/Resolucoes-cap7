#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int matriz[2][3];
    int elementosForaIntervalo = 0;

    printf("Matriz gerada:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 100;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < 5 || matriz[i][j] > 15) {
                elementosForaIntervalo++;
            }
        }
    }

    printf("\nQuantidade de elementos fora do intervalo [5, 15]: %d\n", elementosForaIntervalo);

    return 0;
}

