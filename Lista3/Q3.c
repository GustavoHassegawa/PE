#include <stdio.h>
# define MAX 9

void le_matriz(int matriz[][MAX], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			printf("Insira o valor de %d,%d:", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

int verifica_linha(int matriz[][MAX], int n) {
	
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) 
			for (int k = j+1; k < n; k++) 
				if (matriz[i][j] == matriz[i][k])
					return 0;
	return 1;
}
	
int verifica_coluna(int matriz[][MAX], int n) {

	for (int j = 0; j < n; j++) 
		for (int i = 0; i < n; i++) 
			for (int k = j+1; k < n; k++) 
				if (matriz[i][j] == matriz[k][j])
					return 0;
	return 1;
}

int verifica_quadrante(int matriz[], int n) {
	int linha = 3, coluna = 3;
	
	while (linha > 0) {
		
	}
}
