#include <stdio.h>

#define NUM_ALUNOS 8
#define NUM_DISCIPLINAS 5

int main() {
    int idades[NUM_ALUNOS];
    int codigosDisciplinas[NUM_DISCIPLINAS];
    int provas[NUM_ALUNOS][NUM_DISCIPLINAS];

    printf("Digite as idades dos 8 alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    printf("\nDigite os codigos das 5 disciplinas:\n");
    for (int i = 0; i < NUM_DISCIPLINAS; i++) {
        printf("Codigo da disciplina %d: ", i + 1);
        scanf("%d", &codigosDisciplinas[i]);
    }

    printf("\nDigite a quantidade de provas de cada aluno em cada disciplina:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            printf("Aluno %d, Disciplina %d (Código %d): ", i + 1, j + 1, codigosDisciplinas[j]);
            scanf("%d", &provas[i][j]);
        }
    }

    printf("\nIdades dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: %d anos\n", i + 1, idades[i]);
    }

    printf("\nCodigos das disciplinas:\n");
    for (int i = 0; i < NUM_DISCIPLINAS; i++) {
        printf("Disciplina %d: Codigo %d\n", i + 1, codigosDisciplinas[i]);
    }

    printf("\nQuantidade de provas feitas por cada aluno em cada disciplina:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i + 1);
        for (int j = 0; j < NUM_DISCIPLINAS
		; j++) {
            printf("Disciplina %d (Codigo %d): %d provas\n", j + 1, codigosDisciplinas[j], provas[i][j]);
        }
    }

    return 0;
}
