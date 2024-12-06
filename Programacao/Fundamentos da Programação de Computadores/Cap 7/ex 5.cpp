#include <stdio.h>

#define MESES 12
#define SEMANAS 4

int main() {
    float vendas[MESES][SEMANAS];
    const char* meses[MESES] = {
        "Janeiro", "Fevereiro", "Março", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    for (int i = 0; i < MESES; i++) {
        for (int j = 0; j < SEMANAS; j++) {
            printf("Insira as vendas para %s, semana %d: ", meses[i], j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

    printf("\nTotal vendido em cada mês:\n");
    for (int i = 0; i < MESES; i++) {
        float totalMes = 0;
        for (int j = 0; j < SEMANAS; j++) {
            totalMes += vendas[i][j];
        }
        printf("%s: %.2f\n", meses[i], totalMes);
    }

    printf("\nTotal vendido em cada semana do ano:\n");
    for (int j = 0; j < SEMANAS; j++) {
        float totalSemana = 0;
        for (int i = 0; i < MESES; i++) {
            totalSemana += vendas[i][j];
        }
        printf("Semana %d: %.2f\n", j + 1, totalSemana);
    }

    float totalAno = 0;
    for (int i = 0; i < MESES; i++) {
        for (int j = 0; j < SEMANAS; j++) {
            totalAno += vendas[i][j];
        }
    }
    printf("\nTotal vendido no ano: %.2f\n", totalAno);

    return 0;
}
