#include <stdio.h>
#include "conjunto.h"

Conjunto conjunto_vazio() {
    Conjunto c;
    c.tamanho = 0;
    return c;
}

int conjunto_pertence(Conjunto a, int elemento) {
    for (int i = 0; i < a.tamanho; i++) {
        if (a.elementos[i] == elemento) 
            return 1;
    }
    return 0;
}

Conjunto conjunto_adiciona(Conjunto a, int elemento) {
    Conjunto c = a;
    if (!conjunto_pertence(c,elemento)) {
        c.elementos[c.tamanho] = elemento;
        c.tamanho++;
    }
    return c;
}

Conjunto conjunto_remove(Conjunto a, int elemento) {
    Conjunto c = a;

    for (int i = 0; i < c.tamanho; i++) {
        if (c.elementos[i] == elemento) {
            c.elementos[i] = c.elementos[c.tamanho - 1];
            c.tamanho--;
            break;
        }
    }
    return c;
}

Conjunto conjunto_uniao(Conjunto a, Conjunto b) {
    Conjunto uniao = a;

    for (int i = 0; i < b.tamanho; i++)
        uniao = conjunto_adiciona(uniao, b.elementos[i]);
    return uniao;
}

Conjunto conjunto_intersecao(Conjunto a, Conjunto b) {
    Conjunto intersecao = conjunto_vazio();
    for (int i = 0; i < a.tamanho; i++) 
        if (conjunto_pertence(b, a.elementos[i])) 
            intersecao = conjunto_adiciona(intersecao, a.elementos[i]);
    return intersecao;
}

Conjunto conjunto_diferenca(Conjunto a, Conjunto b) {
    Conjunto diferenca = conjunto_vazio();
    for (int i = 0; i < a.tamanho; i++) 
        if (!conjunto_pertence(b, a.elementos[i])) 
            diferenca = conjunto_adiciona(diferenca, a.elementos[i]);
    return diferenca;
}

void conjunto_imprime(Conjunto a) {
    for (int i = 0; i < a.tamanho; i++) 
        printf("%d, ", a.elementos[i]);
    printf("\n");
}

Conjunto conjunto_le() {
    int valor, tam;
    Conjunto a = conjunto_vazio();
    printf("Qual o tamanho do conjunto?: ");
    scanf("%d", &tam);

    for (int i = 0; i < tam; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);
        a = conjunto_adiciona(a, valor);
    }
    return a;
} 