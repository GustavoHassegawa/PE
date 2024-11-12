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

Conjunto conjunto(int vet[], int n) {
    Conjunto novoConjunto;
    novoConjunto.tamanho = 0;

    for (int i = 0; i < n; i++) {
        novoConjunto.elementos[i] = vet[i]; 
    }
    novoConjunto.tamanho = n;

    return novoConjunto;
}

int conjunto_pertence(int a, Conjunto A) {
    for (int i = 0; i < A.tamanho; i++) {
        if (A.elementos[i] == a) 
            return 1;
    }
    return 0;
}

Conjunto conjunto_uniao(Conjunto A, Conjunto B) {
    Conjunto C = A;
    for (int i = 0; i < B.tamanho; i++) {
        if (!conjunto_pertence(B.elementos[i], C)) {
            C.elementos[C.tamanho] = B.elementos[i];
            C.tamanho++;
        }
    }
    return C;
}

void le_vetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void imprime_conjunto(Conjunto vetor) {
    for (int i = 0; i < vetor.tamanho; i++)
        printf("%d ", vetor.elementos[i]);
}

int main() {
    int vetorA[MAX], vetorB[MAX], tamanhoA, tamanhoB;
    Conjunto conjuntoA, conjuntoB, conjuntoC;

    printf("Digite o tamanho de A: ");
    scanf("%d", &tamanhoA);

    printf("Digite os valores do vetor A:\n");
    le_vetor(vetorA, tamanhoA);

    printf("Digite o tamanho de B: ");
    scanf("%d", &tamanhoB);

    printf("Digite os valores do vetor B:\n");
    le_vetor(vetorB, tamanhoB);

    conjuntoA = conjunto(vetorA, tamanhoA);
    conjuntoB = conjunto(vetorB, tamanhoB);
    conjuntoC = conjunto_uniao(conjuntoA, conjuntoB);

    imprime_conjunto(conjuntoC);
}