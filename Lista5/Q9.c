#include <stdio.h>
#include <stdlib.h>

int ** matriz_le(int n,int m) {
    int **M = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        M[i] = malloc(m * sizeof(int));
    }
    
}