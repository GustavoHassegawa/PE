/*Questão 6. Crie o tipo de dados Conjunto e implemente as seguintes funções
 *• Conjunto conjunto(int vet[]) cria um registro conjunto (Conjunto) no qual os elementos
 *são iguais ao do vetor vet.
 *• Conjunto conjunto_uniao(Conjunto A, Conjunto B) retorna o conjunto obtido pela união
 *do conjuntos A e B.
 *• char conjunto_pertence(int a, Conjunto A) retorna 1 se a pertence ao conjunto A e 0,
 *caso contrário
 */

#include <stdio.h>
#define MAX 100

typedef struct {
    int elementos[MAX];
    int tamanho;
} Conjunto;

Conjunto conjunto(int vet[]) {
    Conjunto novoConjunto;
    novoConjunto.tamanho = 0;
    
}
Conjunto conjunto_uniao(Conjunto A, Conjunto B) 
char conjunto_pertence(int a, Conjunto A) 