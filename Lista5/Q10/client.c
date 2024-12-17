#include <stdio.h>
#include "Q10.h"

int main() {
	VectorInt vetor = vectorint();
	int n, digit, removeDigit;
	
	printf("tamanho do vetor: ");
	scanf("%d",&n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &digit);
		vectorint_insert(vetor, digit);
	}
	printf("O SEU VETOR: ");
	vector_print(vetor);
	
	printf("Qual valor remover ?: ");
	scanf("%d", &removeDigit);
	
	vectorint_remove(vetor, removeDigit);
	
	printf("O seu vetor pos remocao: ");
	vector_print(vetor);
		
 	vector_destroy(vetor);
	
	return 0;
}
