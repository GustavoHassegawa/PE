/*Questão 4. Escreva um programa que, dados dois inteiros n e m, onde 1 ≤ n,m ≤ 1000, e duas
 *matrizes A e B de ordem n×m, calcule a matriz C = A+B, onde a entrada Ci, j = Ai, j +Bi, j*/

#include <stdio.h>
#define MAX 1000

void le_matriz(int matriz[][MAX],int n, int m) {
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) {
            printf("Insira o valor da matriz nas coordenadas %d, %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
}

void soma_matriz(int matrizA[][MAX], int matrizB[][MAX], int matrizC[][MAX], int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
}

void imprime_matriz(int matriz[][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

int main() {
    int matrizA[MAX][MAX], matrizB[MAX][MAX], matrizC[MAX][MAX], n, m;

    printf("Insira o valor n da matriz: ");
    scanf("%d", &n);
    printf("Insira o valor m da matriz: ");
    scanf("%d", &m);

    printf("Defina os valores da matriz A:\n");
    le_matriz(matrizA, n, m);
    printf("Defina os valores da matriz B:\n");
    le_matriz(matrizB, n, m);

    soma_matriz(matrizA, matrizB, matrizC, n, m);

    printf("O resultado da soma: \n");
    imprime_matriz(matrizC, n, m);

    return 0;

}