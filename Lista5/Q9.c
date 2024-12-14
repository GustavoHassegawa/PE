#include <stdio.h>
#include <stdlib.h>


int ** matriz_le(int n,int m) {
    int **M = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        M[i] = malloc(m * sizeof(int));
    }
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &M[i][j]);
    
    return M;
}

void matriz_print(int **M, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d, ", M[i][j]);
        printf("\n");
    }
}

void libera_matriz(int **M, int n) {
    for (int i = 0; i < n; i++)
        free(M[i]);
    free(M);
}

int main() {
    int **M, n, m;

    printf("Insira o numero de linhas: ");
    scanf("%d", &n);

    printf("Insira o numero de colunas: ");
    scanf("%d", &m);

    M = matriz_le(n, m);
    matriz_print(M, n, m);
    libera_matriz(M, n);
    return 0;
}