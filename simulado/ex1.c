#include <stdio.h>

double area_triangulo(int base, int altura) {
	return (base*altura)/2.0;
}

int main() {
	int base, altura;
	
	printf("Insira o valor da base: ");
	scanf("%d", &base);
	
	printf("Insira o valor da altura: ");
	scanf("%d", &altura);
	
	printf("AREA DO TRIANGULO: %.2lf \n", area_triangulo(base, altura));
	
	return 0;
}
