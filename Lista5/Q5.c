#include <stdio.h>

void swap(int **a, int **b) {
	int *temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void imprime_vetor(int vetor[], int n) {
	for (int i = 0; i < n; i++)
		printf("%d, ", vetor[i]);
	printf("\n");
}

int main() {
	int a[3] = {5, 6, 7};
	int b[4] = {1, 2, 0, 8};
	
	swap(&a, &b);
	
	imprime_vetor(a,4);
	imprime_vetor(b,3);
	return 0;
}
