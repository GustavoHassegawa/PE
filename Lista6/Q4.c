#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * inverte(char *word, int inicio, int fim) {
	if (inicio == fim) {
		return word;
	} else {
		char temp = word[inicio];
		word[inicio] = word[fim];
		word[fim] = temp;
		return inverte(word, inicio + 1, fim - 1);
	}
}

int main() {
	int tamanho;
	char *palavra;
	
	printf("Insira o tamanho da palavra: ");
	scanf("%d", &tamanho);
	getchar();
	palavra = malloc(sizeof(char) * (tamanho + 1));
	fgets(palavra, tamanho+1, stdin);
	
	printf("%s", inverte(palavra, 0, strlen(palavra)));
	
	free(palavra);
	return 0;
}
