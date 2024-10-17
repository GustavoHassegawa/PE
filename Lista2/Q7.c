/*Questão 7. Escreva um programa que:
 *• leia os inteiros n e m, onde 1 ≤ n,m ≤ 1000;
 *• leia uma matriz A de ordem n×m;
 *• leia dois inteiros i e j, com 1 ≤ i, j ≤ n;
 *• compute uma nova matriz A' formada pela troca da i-ésima linha com a j-ésima linha de A.*/

#include <stdio.h>
#define MAX 100

void le_matriz(int matriz[][MAX],int n, int m) {
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) {
            printf("Insira o valor da matriz nas coordenadas %d, %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
}

void imprime_matriz(int matriz[][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

void muda_linhas(int matriz[][MAX], int n, int m, int i, int j) {
    for (int k = 0; k < n; k++){
        int temp = matriz[i][k];
        matriz[i][k] = matriz[j][k];
        matriz[j][k] = temp;
    }    
}

int main() {
    int matrizA[MAX][MAX], n, m, i, j;

    printf("Insira o valor n da matriz: ");
    scanf("%d", &n);
    printf("Insira o valor m da matriz: ");
    scanf("%d", &m);

    printf("Defina os valores da matriz A:\n");
    le_matriz(matrizA, n, m);
    imprime_matriz(matrizA, n, m);

    printf("Insira o valor de i:");
    scanf("%d", &i);

    printf("Insira o valor de j:");
    scanf("%d", &j);

    muda_linhas(matrizA, n, m, i, j);

    imprime_matriz(matrizA, n, m);
}