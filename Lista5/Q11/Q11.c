#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Q11.h"

void turma_matricula(Turma turma, char nome[]) {
    int tamanho = strlen(nome);

    if (turma->tamanho == turma->nalunos) {
        turma->tamanho *= 2;
        turma->alunos = realloc(turma->alunos, turma->tamanho * sizeof(char *));
    }

    turma->alunos[turma->nalunos] = malloc(sizeof(char) * (tamanho + 1));
    strcpy(turma->alunos[turma->nalunos], nome);
    turma->nalunos++;
}

void turma_lista(Turma turma) {
    for (int i = 0; i < turma->nalunos; i++) {
        printf("%s\n", turma->alunos[i]);
    }
}

void turma_jubila(Turma turma, char nome[]) {
    int j = 0;

    for (int i = 0; i < turma->nalunos; i++) {
        if (!strcmp(turma->alunos[i],nome)) {
            turma->alunos[j] = turma->alunos[i];
            j++;
        }
    }
    turma->nalunos = j;

    if (turma->nalunos < turma->tamanho/2) {
        turma->tamanho /= 2;
        turma->alunos = realloc(turma->alunos, turma->tamanho * sizeof(char*));
    }
}

void turma_apaga(Turma turma) {
    for (int i = 0; i < turma->nalunos; i++) {
        free(turma->alunos[i]);
    }
    free(turma->alunos);
    free(turma);
}

void le_nome(char nome[], int capacidade) {
    int i = 0;
    char c;

    while ((c = getchar()) != '\n') {
        if (i >= capacidade -1) {
            capacidade *= 2;
            nome = realloc(nome, capacidade * sizeof(char));
        }
        nome[i++] = c;
    }
    nome[i] = '\0';
}