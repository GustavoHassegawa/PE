#include <stdio.h>
#include <stdlib.h>

void le_vetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

double media_vetor(int vetor[], int n) {
    int soma = 0;

    for (int i = 0; i < n; i++)
        soma += vetor[i];
    
    return (soma/1.0)/n; 
}

int main() {
    int *vetor, tamanho;

    printf("Insira quantos números você ira calcular a média: ");
    scanf("%d", &tamanho);
    vetor = malloc(tamanho * sizeof(int));
    le_vetor(vetor, tamanho);

    printf("%.2f", media_vetor(vetor, tamanho));
    free(vetor);
    return 0;
}
