#include <stdio.h>
#include <stdlib.h> 

int size_of_binary(int number) {
    int tamanho = 1;

    while (number > 1) {
        number = number / 2;
        tamanho++;
    }
    return tamanho;
}

void convert_to_binary(int number, char output[], int index) {
    if (number > 1) {
        convert_to_binary(number / 2, output, index - 1);
    }
    output[index - 1] = (number % 2) + '0';
}

int main() {
    int numero, tamanho;
    char *output;

    printf("Insira o valor do numero a ser convertido: ");
    scanf("%d", &numero);

    tamanho = size_of_binary(numero);
    output = malloc(tamanho * sizeof(int));

    convert_to_binary(numero, output, tamanho);
    printf("%s\n", output);

    free(output);

    return 0;
}