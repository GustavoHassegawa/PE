# include <stdio.h>
#define MAX 10

void le_matriz(int matriz[][MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			printf("Insira o valor de %d,%d:", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

int soma_diagonal(int matriz[][MAX], int n) {
	int soma = 0;
	
	for (int i = 0; i < n; i++) {
		soma += matriz[i][i];
	}
	return soma;
}

double media_acima_diagonal(int matriz[][MAX], int n) {
	double soma = 0, divisor=0;
	
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			soma += matriz[i][j];
			divisor++;
		}
	}
	return soma/divisor;
}

int main() {
	int matriz[MAX][MAX], n;
	char letra;
	
	printf("Insira o valor de n: ");
	scanf("%d", &n);
	
	le_matriz(matriz, n);
	
	printf("Digite 'S' para calcular a soma da diagonal\n"
		   "Digite 'M' para calular a média dos valores acima da diagonal: ");
	scanf(" %c", &letra);
	
	if (letra == 'S') {
		printf("%d\n", soma_diagonal(matriz, n));
	} else if (letra == 'M'){
		printf("%lf\n", media_acima_diagonal(matriz, n));
	}
}
