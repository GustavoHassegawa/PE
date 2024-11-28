#include <stdio.h>
#include <stdlib.h>

typedef struct produto {
	int *x;
	int *y;
	int tamanho;
}* Produto;

typedef struct vetor {
	int *elementos;
	int tamanho;
} * Vetor;

void le_vetor(Vetor V) {
	for (int i = 0; i < V->tamanho; i++)
		scanf("%d", &V->elementos[i]);
}

void imprime_vetor(Vetor V) {
	for (int i = 0; i < V->tamanho; i++)
		printf("%d, ", V->elementos[i]);
	printf("\n");
}

void imprime_produto(Produto P) {
	for (int i = 0; i < P->tamanho; i++)
		printf("(%d,%d); ",P->x[i], P->y[i]);
	printf("\n");
}

Produto produto_vetorial(Vetor A, Vetor B) {
	int indexProdutos = 0;
	Produto produtos = malloc(sizeof(struct produto));
	produtos->tamanho = A->tamanho * B->tamanho;
	
	produtos->x = (int *)malloc(produtos->tamanho * sizeof(int));
	produtos->y = (int *)malloc(produtos->tamanho * sizeof(int));
	
	for (int i = 0; i < A->tamanho; i++) {
		for (int j = 0; j < B->tamanho; j++) {
			produtos->x[indexProdutos] = A->elementos[i];
			produtos->y[indexProdutos] = B->elementos[j];
			indexProdutos++;
		}
	}
	return produtos;
}

int main(void) {
	Vetor vetorA = malloc(sizeof(struct vetor));
	Vetor vetorB = malloc(sizeof(struct vetor));
	
	printf("Qual o tamanho do vetor A? ");
	scanf("%d", &vetorA->tamanho);
	printf("Qual o tamanho do vetor B? ");
	scanf("%d", &vetorB->tamanho);
	
	vetorA->elementos = (int *)malloc(vetorA->tamanho * sizeof(int));
	vetorB->elementos = (int *)malloc(vetorB->tamanho * sizeof(int));
	
	printf("Insira os valores do vetor A:\n");
	le_vetor(vetorA);
	
	printf("Insira os valores do vetor B:\n");
	le_vetor(vetorB);
	
	printf("Vetor A: ");
	imprime_vetor(vetorA);
	
	printf("Vetor B: ");
	imprime_vetor(vetorB);
	
	Produto produtoVetorial = produto_vetorial(vetorA, vetorB);
	
	printf("Produto vetorial:\n");
	imprime_produto(produtoVetorial);
	
	free(produtoVetorial);
	free(vetorA->elementos);
	free(vetorA);
	free(vetorB->elementos);
	free(vetorB);
	
	return 0;
}
