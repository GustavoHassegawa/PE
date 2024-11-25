#include <stdio.h>
#include <stdlib.h>

void le_vetor(char vetor[], int n) {
	for (int i = 0; i < n; i++) {
		printf("Posicao %d:", i);
		scanf("%c", &vetor[i]);
		getchar();
	}
}

void imprime_vetor(char vetor[], int n) {
	for (int i = 0; i < n; i++) {
		printf("entrada %d, conteudo %c, endereco: %p\n", i, vetor[i], &vetor[i]);
	}
}

int main() {
	int n;
	char *vetor;
	
	printf("Insira o numero de caracteres: ");
	scanf("%d", &n);
	getchar();
	vetor = malloc(n * sizeof(char));
	
	le_vetor(vetor, n);
	imprime_vetor(vetor, n);
	
	free(vetor);
	
	return 0;
}
