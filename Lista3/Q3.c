#include <stdio.h>
# define MAX 9

void le_matriz(int matriz[][MAX], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			printf("Insira o valor de %d,%d:\n", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
}


/*int verifica_linhas(int matriz[][MAX], int n) {
	
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) 
			for (int k = j+1; k < n; k++) 
				if (matriz[i][j] == matriz[i][k])
					return 0;
	return 1;
}*/
	
/*int verifica_colunas(int matriz[][MAX], int n) {

	for (int j = 0; j < n; j++) 
		for (int i = 0; i < n; i++) 
			for (int k = j+1; k < n; k++) 
				if (matriz[i][j] == matriz[k][j])
					return 0;
	return 1;
}*/

// Verifica uma unica linha
int verifica_linha(int matriz[][MAX], int i) {

	int contador_numeros[MAX] = {0}, indice;

	for (int j = 0; j < 9; j++){
		indice = matriz[i][j]-1;
		if (contador_numeros[indice] == 0) 
			contador_numeros[indice] += 1;
		else 
			return 0;
	}
	return 1;
}

// Verifica uma unica coluna
int verifica_coluna(int matriz[][MAX], int j) {

	int contador_numeros[MAX] = {0}, indice;

	for (int i = 0; i < 9; i++){
		indice = matriz[i][j]-1;
		if (contador_numeros[indice] == 0) 
			contador_numeros[indice] += 1;
		else 
			return 0;
	}
	return 1;
}

// Verifica um unico quadrante
int verifica_quadrante(int matriz[][MAX], int i, int j) {

	int contador_numeros[MAX] = {0}, indice;

	for (int l = i - 1; l < i + 1; l++) 
		for (int c = j - 1; c < j + 1; c++) {
			indice = matriz[l][c] - 1;
			if (contador_numeros[indice] == 0) 
				contador_numeros[indice] += 1;
			else 
				return 0;
			
		}
	return 1;		
}

int main() {
	int sudoku[MAX][MAX], linha = 0, coluna = 0;

	printf("Verificador de Sudoku");
	le_matriz(sudoku, 9);

	do {
		if (verifica_linha(sudoku, linha) == 0) {
			printf("ERRO NA LINHA %d\n", linha);
			return 0;
		}
		linha++;
	} while (linha < 9);

	do {
		if (verifica_coluna(sudoku, coluna) == 0) {
			printf("ERRO NA COLUNA %d\n", coluna);
			return 0;
		}
		coluna++;
	} while (coluna < 9);

	linha = 0;
	coluna = 0;

	for (int i = 1 + 2 * linha; linha < 3; linha++) {
		coluna = 0;
		for (int j = 1 + 2 * coluna; coluna < 3; coluna++) {
			if (verifica_quadrante(sudoku, i, j) == 0) {
				printf("ERRO NO QUADRANTE %d\n", linha+coluna);
				return 0;
			}
		}
	}
	printf("Sudoku correto\n"); 
	return 1;
}