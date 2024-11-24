#include <stdio.h>
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

int main() {
    char string[MAX];

    printf("Digite a sua frase: ");
    fgets(string, MAX, stdin);
    fflush(stdin);
    minuscula_para_maiuscula(string);
    printf("FRASE EM LETRAS MAISUCULAS:\n%s", string);

}