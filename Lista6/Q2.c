#include <stdio.h>

double power(double a, int b) {
	if (b == 1) {
		return a;
	} else {
		return power(a * a, b - 1);
	}
}

int main() {
	double base;
	int expoente;
	
	printf("Insira o valor da base: ");
	scanf("%lf", &base);
	
	printf("Insira o valor do expoente: ");
	scanf("%d", &expoente);
	
	printf("%lf\n", power(base, expoente));
	return 0;
}
