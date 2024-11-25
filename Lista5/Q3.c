#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main() {
	int valorA, valorB;
	
	printf("Insira o valor A: ");
	scanf("%d", &valorA);
	printf("Insira o valor B: ");
	scanf("%d", &valorB);
	
	swap(&valorA, &valorB);
	printf("A: %d\n", valorA);
	printf("B: %d\n", valorB);	
	
	return 0;
}
