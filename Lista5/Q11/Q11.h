#ifndef QUESTAO11
#define QUESTA011

typedef struct {
    char **alunos;
    int tamanho;
    int nalunos;
} * Turma;

void turma_matricula(Turma turma, char nome[]); 

void turma_lista(Turma turma);

void turma_jubila(Turma turma, char nome[]);

void turma_apaga(Turma turma);

void le_nome(char nome[], int capacidade);

#endif