#include <stdio.h>
#define MAX 200

void matriz_quadrada(int A[][MAX], int resultado[][MAX], int n) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				resultado[i][j] += A[i][k] * A [k][j];
			}
		}
	}
}

void le_matriz (int matriz[][MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//printf("%d, %d", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}	
}

void imprime_matriz (int matriz[][MAX],int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%d, ", matriz[i][j]);
		printf("\n");
	}	
}

int main() {
	int matriz[MAX][MAX], n, resultado[MAX][MAX];
	
	//printf("Insira o valor de n: ");
	scanf("%d", &n);
	
	le_matriz(matriz, n);
	
	matriz_quadrada(matriz, resultado, n);
	imprime_matriz(resultado, n);
	
	return 0;
}
