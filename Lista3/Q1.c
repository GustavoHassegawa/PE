
#include <stdio.h>
#define MAX 1000

int busca_binaria(int valores[], int n, int chave) {
	int inicio = 0, fim = n - 1 , meio;
	meio = (inicio + fim)/2;

	for(int i = inicio; i <= meio; i++) {
		if (chave == valores[i]) {
			return i;
		}
	}
	
	for(int i = meio+1; i <= fim; i++) {
		if (chave == valores[i]) {
				return i;
			}
	}

	return -1;
}

void le_vetor(int vetor[], int n) {
	int numero;
	for (int i = 0; i < n; i++) {
		printf("Insira o valor de %d: ", i);
		scanf("%d", &numero);
		vetor[i] = numero;
	}
}

int main(){
	int valores[MAX], chave, n;
	
	printf("Insira o tamanho do vetor: ");
	scanf("%d", &n);
	
	printf("Insira o valor da chave: ");
	scanf("%d", &chave);
	
	le_vetor(valores, n);
	printf("A posição da chave %d é %d\n", chave, busca_binaria(valores, n, chave));
}
