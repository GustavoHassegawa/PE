#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* revert(char *string) {
	int stringSize = strlen(string);
	char *revertString = malloc(stringSize * sizeof(char));
	
	for (int i = 0; i < stringSize; i++)
		revertString[i] = string[stringSize - 1 -i]; 
	
	return revertString;
} 

int main() {
	int tamanho;
	char *frase;
	
	printf("Qual o tamanho da sua string: ");
	scanf("%d", &tamanho);
	getchar();
	
	frase = malloc(tamanho * sizeof(char));
	
	printf("Insira sua frase:");
	fgets(frase, tamanho + 1, stdin);
	
	char *fraseRevertida = revert(frase);
	
	printf("FRASE REVERSA: %s\n", fraseRevertida);
}
