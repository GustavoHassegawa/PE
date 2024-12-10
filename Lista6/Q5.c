#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main() {
	int numero1, numero2;
	
	printf("Insira o valor do numero 1: ");
	scanf("%d", &numero1);
	printf("Insira o valor do numero 2: ");
	scanf("%d", &numero2);
	
	printf("%d\n", gcd(numero1, numero2));
	return 0;
}


