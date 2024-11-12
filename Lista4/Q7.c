#include <stdio.h>
#define MAX 100

typedef struct {
    int elementos[MAX][MAX];
    int n;
} Matriz;

Matriz matriz_le (int n) {
    Matriz matriz;
    matriz.n = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Coloque o valor na coordenada %d, %d: ", i,j);
            scanf("%d", &matriz.elementos[i][j]);
        }
    }
    return matriz;
}

Matriz matriz_multiplica(Matriz A, Matriz B) {
    Matriz C;
    C.n = A.n;
    for (int i = 0; i < C.n; i++) {
        for (int j = 0; j < C.n; j++) {
            for (int k = 0; k < C.n; k++) {
                C.elementos[i][j] += A.elementos[i][k] * B.elementos[k][j];
            }
        }
    }
    return C;
}