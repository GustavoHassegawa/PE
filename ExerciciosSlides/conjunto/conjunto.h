#ifndef CONJUNTO_H
#define CONJUNTO_H
#define MAX 100

typedef struct {
    int elementos[MAX];
    int tamanho;
} Conjunto;

Conjunto conjunto_vazio();
Conjunto conjunto_uniao(Conjunto a, Conjunto b);
Conjunto conjunto_intersecao(Conjunto a, Conjunto b);
Conjunto conjunto_diferenca(Conjunto a, Conjunto b);
Conjunto conjunto_adiciona(Conjunto a, int elemento);
Conjunto conjunto_remove(Conjunto a, int elemento);
int conjunto_pertence(Conjunto a, int elemento);
void conjunto_imprime(Conjunto a);
Conjunto conjunto_le(); 

#endif
