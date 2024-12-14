#include <stdio.h>
#include <stdlib.h>

int soma(int v[], int n) {
	int sum = 0;
	
	if (n == 0) {
		return sum;
	} else {
		sum += v[n-1]; 
		return sum + soma(v, n - 1);
	}
}

void le_vetor(int *v, int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
}

int main() {
	int *v, n;
	
	printf("Qual o tamanho do vetor? :");
	scanf("%d", &n);
	v = malloc(sizeof(int) * n);
	le_vetor(v, n);
	
	printf("%d\n", soma(v, n));
	free(v);
	
	return 0;
	
}
