#include <stdio.h>
#include <stdlib.h>

void inc(int *a) {
	*a += 1;
}

int main() {
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	inc(&numero);
	
	printf("numero incrementado: %d\n", numero);
}
