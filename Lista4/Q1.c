#include <stdio.h>
#define MAX 100

int detecta_caractere (char frase[], char caractere) {
    int i = 0;
    while(frase[i] != '\0') {
        if (frase[i]==caractere) {
            return i;
        }
        i++;
    }
    return i;
}

void imprime_frase (char frase[], int ini, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%c", frase[ini+i]);
    }
    printf("\n");
}

int main() {
    char frase[MAX], caractere;
    
    printf("Insira um caractere:");
    scanf("%c", &caractere);
    getchar();

    printf("Insira uma frase:");
    fgets(frase, MAX, stdin);

    int final = detecta_caractere(frase, caractere);

    imprime_frase(frase, 0, final);

    return 0;
}