#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strcat_novo(char *a, char *b) {
	int tamanho = strlen(a) + strlen(b) + 1;
	
	char *stringNova = malloc((tamanho + 1) * sizeof(char));
	
	int i = 0;
	
	for(i = 0;a[i] != '\0' ; i++) {
		stringNova[i] = a[i];
	}
	
	for(int j = 0; b[j] != '\0'; j++, i++) {
		stringNova[i] = b[j];
	}
	stringNova[i] = '\0';
	
	return stringNova;
}

int main() {
	char *stringA, *stringB, *stringNova;
	int tamanhoA, tamanhoB;
	
	printf("Tamanho da string A: ");
	scanf("%d", &tamanhoA);
	printf("Tamanho da string B: ");
	scanf("%d", &tamanhoB);
	getchar();
	
	stringA = malloc(tamanhoA * sizeof(char));
	stringB = malloc(tamanhoB * sizeof(char));
	stringNova = malloc((tamanhoA + tamanhoB) * sizeof(char));
	
	printf("String A: ");
	fgets(stringA, tamanhoA + 1, stdin);
	getchar();
	
	printf("String B: ");
	fgets(stringB, tamanhoB + 1, stdin);
	getchar();
	
	stringNova = strcat_novo(stringA, stringB);
	
	printf("%s\n ", stringNova);
	
	free(stringA);
	free(stringB);
	free(stringNova);
	return 0;
}
