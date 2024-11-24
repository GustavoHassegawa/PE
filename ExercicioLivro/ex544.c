#include <stdio.h>
#include <stdlib.h>

int verifica_impar(int numero) {
    if (numero % 2 != 0) {
        return 1;
    }
    return 0;
}

void le_vetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Valor do indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int main() {
    int n, *vetor;
    
    printf("Qual o tamanho do vetor?: ");
    scanf("%d", &n);

    vetor = malloc(n * sizeof(int));
    le_vetor(vetor, n);
    for (int i = 0; i < n; i++) {
        if (verifica_impar(vetor[i])) 
            printf("%d, ",vetor[i]);
    }
    printf("\n");
    free(vetor);
    return 0;
}