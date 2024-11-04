#include <stdio.h>
#define MAX 100

int conta_zeros(char cadeia[]) {
    int max = 0, i = 0, contadorTemporario = 0;

    while (cadeia[i] != '\0') {
        if (cadeia[i] == '0') {
            contadorTemporario++;
            if (contadorTemporario > max)
                max = contadorTemporario;
        } else 
            contadorTemporario = 0;
        i++;
    }
    return max;
}

int main() {
    char sequencia[MAX];

    printf("Insira a sequencia: ");
    fgets(sequencia, MAX, stdin);

    printf("%d", conta_zeros(sequencia));
}