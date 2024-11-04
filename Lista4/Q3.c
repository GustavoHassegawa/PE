#include <stdio.h>
#define MAX 100

char maiuscula_para_minuscula (char letra) {
    return letra - 'A' + 'a';
}

char minuscula_para_maiuscula (char letra) {
    return letra - 'a' + 'A';
}

void imprime_frase (char frase[], int ini) {
    int i = 0;
    while (frase[i] != '\0') {
        printf("%c", frase[ini+i]);
        i++;
    }
    printf("\n");
}

int main() {
    char frase[MAX];
    int i = 0;

    printf("Insira a frase: ");
    fgets(frase, MAX, stdin);

    while (frase[i] != '\0') {
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            frase[i] = minuscula_para_maiuscula(frase[i]);
        } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
            frase[i] = maiuscula_para_minuscula(frase[i]);
        }
        i++;
    }
    imprime_frase(frase,0);

}