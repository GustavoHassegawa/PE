#include <stdio.h>

void count_down(int n) {
	if (n == 1) 
		printf("%d\n", n);
	else {
		count_down(n - 1);
		printf("%d\n", n);
	}
}

int main() {
	int numero;
	
	printf("Insira o valor: ");
	scanf("%d", &numero);
	
	count_down(numero);
	
	return 0;
} 
