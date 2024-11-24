#include <stdio.h>
#include <string.h>

#define MAX 100

void minuscula_para_maiuscula (char string[]) {
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 'a';
            string[i] += 'A';
        }
        i++;
    }
}

void maiuscula_para_minuscula (char string[]) {
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] -= 'A';
            string[i] += 'a';
        }
        i++;
    }
}

int main() {
    char escolha, frase[MAX];

    printf("Insira a frase a ser convertida: ");
    fgets(frase, MAX, stdin);
    fflush(stdin);

    do {
        printf("Voce deseja converter para maiusculo (M) ou minusculo (N)? :");
        scanf("%c", &escolha);
        fflush(stdin);
        if (escolha != 'M' && escolha != 'N') 
            printf("ESCOLHA INVALIDA");
    } while (escolha != 'M' && escolha != 'N');

    if (escolha == 'M') {
        minuscula_para_maiuscula(frase);
        printf("FRASE EM LETRAS MAIUSCULAS:\n");
        printf("%s", frase);
    } else if (escolha == 'N') {
        maiuscula_para_minuscula(frase);
        printf("frase em letras minusculas:\n");
        printf("%s", frase);
    }
}