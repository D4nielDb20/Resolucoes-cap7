#include <stdio.h>

#define NUM_ALUNOS 8
#define NUM_DISCIPLINAS 5

int main() {
    int idades[NUM_ALUNOS];
    int codigosDisciplinas[NUM_DISCIPLINAS];
    int provas[NUM_ALUNOS][NUM_DISCIPLINAS];
    int codigoDisciplina, contadorAlunosComIdade, contadorAlunosSemProvas = 0;
    float somaIdadesSemProvas = 0;

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
            printf("Aluno %d, Disciplina %d (Codigo %d): ", i + 1, j + 1, codigosDisciplinas[j]);
            scanf("%d", &provas[i][j]);
        }
    }

    printf("\nDigite o codigo da disciplina para consulta: ");
    scanf("%d", &codigoDisciplina);

    int disciplinaValida = 0;
    for (int i = 0; i < NUM_DISCIPLINAS; i++) {
        if (codigosDisciplinas[i] == codigoDisciplina) {
            disciplinaValida = 1;
            break;
        }
    }

    if (!disciplinaValida) {
        printf("Erro: codigo da disciplina nao cadastrado!\n");
    } else {
        contadorAlunosComIdade = 0;
        for (int i = 0; i < NUM_ALUNOS; i++) {
            if (idades[i] >= 18 && idades[i] <= 25 && provas[i][0] > 2) { 
                contadorAlunosComIdade++;
            }
        }
        printf("\nQuantidade de alunos com idade entre 18 e 25 anos que fizeram mais de 2 provas: %d\n", contadorAlunosComIdade);

        printf("\nAlunos que fizeram menos de 3 provas na disciplina (Codigo %d):\n", codigoDisciplina);
        for (int i = 0; i < NUM_ALUNOS; i++) {
            if (provas[i][0] < 3) { 
                printf("Aluno %d: %d provas na disciplina %d\n", i + 1, provas[i][0], codigoDisciplina);
            }
        }

        for (int i = 0; i < NUM_ALUNOS; i++) {
            int fezProvasEmTodas = 1;
            for (int j = 0; j < NUM_DISCIPLINAS; j++) {
                if (provas[i][j] == 0) {
                    fezProvasEmTodas = 0;
                    somaIdadesSemProvas += idades[i];
                    contadorAlunosSemProvas++;
                    break;
                }
            }
        }

        if (contadorAlunosSemProvas > 0) {
            float mediaIdade = somaIdadesSemProvas / contadorAlunosSemProvas;
            printf("\nMedia de idade dos alunos que nao fizeram nenhuma prova em alguma disciplina: %.2f\n", mediaIdade);
        } else {
            printf("\nNenhum aluno deixou de fazer provas em alguma disciplina.\n");
        }
    }

    return 0;
}
