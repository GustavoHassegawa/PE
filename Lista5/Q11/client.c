#include <stdio.h>
#include <stdlib.h>
#include "Q11.h"

int main() {
    int matricular, capacidade = 10;
    char *nome = malloc(capacidade * sizeof(char));
    Turma turma = malloc(sizeof(Turma));

    printf("Quantos alunos matricular?: ");
    scanf("%d", &matricular);
    getchar();

    for (int i = 0; i < matricular; i++) {
        le_nome(nome, capacidade);
        turma_matricula(turma, nome);
        free(nome);
        nome = malloc(capacidade * sizeof(char));
    }
    free(nome);

    turma_lista(turma);

    turma_apaga(turma);
}