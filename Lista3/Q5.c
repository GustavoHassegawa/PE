#include <stdio.h>
#define MAX 100

void camadas(int matriz[][MAX], int N) {

    int meio = (N+1)/2, valor = 1;
    
    for (int camada = 0; camada < meio; camada++) {

        for (int j = camada; j < N - camada; j++) {
            matriz[camada][j] = valor;
            matriz[N - camada - 1][j] = valor;
        }

        for (int i = camada; i < N - camada; i++) {
            matriz[i][camada] = valor;
            matriz[i][N - camada - 1] = valor;
        }
    valor++;
    }
}

void imprime_matriz(int matriz[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

int main() {
    int N, matriz[MAX][MAX];

    printf("Insira o valor de N: ");
    scanf("%d", &N);

    camadas(matriz, N);
    imprime_matriz(matriz, N);
}