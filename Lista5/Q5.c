#include <stdio.h>
#include <stdlib.h>

void swap(int **a, int **b) {
	int *temp = *a;
	*a = *b;
	*b = temp;
}

void le_vetor(int *vetor, int n) {
	for (int i = 0; i < n; i++){
		printf("Position %d: ", i);
		scanf("%d", &vetor[i]);
	}
}

void imprime_vetor(int *vetor, int n) {
	for (int i = 0; i < n; i++)
		printf("%d, ", vetor[i]);
	printf("\n");
}

int main() {
	int *a, *b, sizeA, sizeB;
	
	printf("Tamanho vetor A: ");
	scanf("%d", &sizeA);
	
	printf("Tamanho vetor B: ");
	scanf("%d", &sizeB);
	
	a = malloc(sizeA * sizeof(int));
	b = malloc(sizeB * sizeof(int));
	
	printf("INSIRA OS VALORES DO VETOR A:\n");
	le_vetor(a, sizeA);
	
	printf("INSIRA OS VALORES DO VETOR B:\n");
	le_vetor(b, sizeB);
	
	printf("Vetor A: ");
	imprime_vetor(a,sizeA);
	
	printf("Vetor B: ");
	imprime_vetor(b,sizeB);
	
	printf("---SWAP!---\n");
	swap(&a, &b);
	
	printf("Vetor A: ");
	imprime_vetor(a,sizeB);
	
	printf("Vetor B: ");
	imprime_vetor(b,sizeA);
	return 0;
}
