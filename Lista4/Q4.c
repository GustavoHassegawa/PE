/*Questão 4. Escreva um programa que receba uma palavra e uma frase como entrada. O programa
 *deve escrever “sim” se a palavra estiver presente na frase e “não” caso contrário.
 */

#include <stdio.h>
#define MAX 100

int verifica_palavra(char palavra1[], char palavra2[]) { 
    int i = 0;
    do {
        if (palavra1[i] != palavra2[i])
            return 0;
        i++; 
    } while (palavra1[i] != '\0' && palavra2[i] != '\0');
    return 1;
}

int main() {
    char frase[MAX], palavra[MAX], palavraTemporaria[MAX];
    int i = 0, j = 0;

    printf("Insira a palavra: ");
    fgets(palavra, MAX, stdin);
    
    printf("Insira a frase: ");
    fgets(frase, MAX, stdin);

    while (frase[i] != '\0') {
        if (frase[i] == ' ' || frase[i+1] == '\0') {
            if(verifica_palavra(palavra, palavraTemporaria) == 1) {
                printf("Sim\n");
                return 1;
            } else {
                palavraTemporaria[0] ='\0';
                j = 0;
            } 
        } else {
            palavraTemporaria[j] = frase[i];
            palavraTemporaria[j+1] = '\0';
            j++;
        }
        i++;
    }
    printf("Nao\n");
    return 0;
}
