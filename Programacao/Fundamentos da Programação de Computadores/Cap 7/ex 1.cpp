#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[6][4];
    
    for(int i = 0; i < 6; i++){
        for(int u = 0; u < 4; u++){
            matriz[i][u] = rand() % 100;
            printf("%i ", matriz[i][u]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i < 6; i++){
        int maiorElemento = matriz[i][0];
        
        for(int u = 1; u < 4; u++){
            if(matriz[i][u] > maiorElemento){
                maiorElemento = matriz[i][u];
            }
        }
        
        for(int u = 0; u < 4; u++){
            matriz[i][u] *= maiorElemento;
        }
    }

    for(int i = 0; i < 6; i++){
        for(int u = 0; u < 4; u++){
            printf("%i ", matriz[i][u]);
        }
        printf("\n");
    }

    return 0;
}
