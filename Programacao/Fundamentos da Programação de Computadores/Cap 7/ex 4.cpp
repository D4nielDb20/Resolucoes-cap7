#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 15
#define NUM_PROVAS 5

int main() {
    char nomes[NUM_ALUNOS][50    float notas[NUM_ALUNOS][NUM_PROVAS    float media_aluno, media_classe = 0;
    int i, j;

    printf("Digite o nome dos %d alunos:\n", NUM_ALUNOS);
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", nomes[i]);  
    }

    printf("\nDigite as notas dos alunos nas %d provas:\n", NUM_PROVAS);
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Notas do aluno %s:\n", nomes[i]);
        for (j = 0; j < NUM_PROVAS; j++) {
            printf("Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);  
        }
    }

    printf("\nResultados:\n");

        for (i = 0; i < NUM_ALUNOS; i++) {
        media_aluno = 0;

        for (j = 0; j < NUM_PROVAS; j++) {
            media_aluno += notas[i][j];
        }
        media_aluno /= NUM_PROVAS;
        media_classe += media_aluno;

        char situacao[10];
        if (media_aluno >= 7.0) {
            strcpy(situacao, "Aprovado");
        } else if (media_aluno >= 5.0) {
            strcpy(situacao, "Exame");
        } else {
            strcpy(situacao, "Reprovado");
        }

        printf("Aluno: %s | Média: %.2f | Situação: %s\n", nomes[i], media_aluno, situacao);
    }

    media_classe /= NUM_ALUNOS;
    printf("\nMédia da classe: %.2f\n", media_classe);

    return 0;
}
