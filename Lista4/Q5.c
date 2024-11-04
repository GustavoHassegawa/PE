#include <stdio.h>
#include <string.h>
#define MAX 1000

void imprime_linha(char linha[]) {
    int i = 0;

    while (linha[i] != '\0') {
        printf("%c", linha[i]);
        i++;
    }
}



int main() {
    char texto[MAX], letra[MAX] = "", linha[81] = "";
    int i = 0, j = 0;

    printf("Insira o texto: ");
    fgets(texto, MAX, stdin);
    printf("TEXTO FORMATADO:\n");

    while (texto[i] != '\0') {
        if (texto[i] == ' ' || texto[i] == '\0' || texto[i] =='\n') {
            if (strlen(letra) + strlen(linha) + 1<= 80) {
                strcat(linha, letra);
                strcat(linha, " ");
            } else {
                imprime_linha(linha);
                printf("\n");
                strcpy(linha, letra);
                strcat(linha, " ");
            }
            letra[0] = '\0';
            j = 0;
        } else {
            letra[j] = texto[i];
            letra[j+1] = '\0';
            j++;
        }
        i++;
    }
    imprime_linha(linha);

    return 0;
}