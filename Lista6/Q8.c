#include <stdio.h>

void collatz(int n) {
	if (n == 1) {
		printf("%d ", n);
	} else if (n % 2 == 0) {
		printf("%d ", n);
		collatz(n / 2);
	} else {
		printf("%d ", n);
		collatz(n * 3 + 1);
	}
}

int main() {
	int numero;
	
	printf("Insira o valor: ");
	scanf("%d", &numero);
	
	collatz(numero);
	printf("\n");
	
	return 0;
} 
