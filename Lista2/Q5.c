/*Questão 5. Escreva um programa que, dados dois inteiros n e m, onde 1 ≤ n,m ≤ 1000, leia uma
 *matriz A de ordem n×m e calcule a sua transposta.*/

#include <stdio.h>
#define MAX 100

void le_matriz(int matriz[][MAX],int n, int m) {
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) {
            printf("Insira o valor da matriz nas coordenadas %d, %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
}

void transposta(int matriz[][MAX], int transposta[][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void imprime_matriz(int matriz[][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

int main() {
    int matrizA[MAX][MAX], matrizTransposta[MAX][MAX], n, m;

    printf("Insira o valor n da matriz: ");
    scanf("%d", &n);
    printf("Insira o valor m da matriz: ");
    scanf("%d", &m);

    printf("Defina os valores da matriz A:\n");
    le_matriz(matrizA, n, m);
    imprime_matriz(matrizA, n, m);
    
    transposta(matrizA, matrizTransposta, n, m);
    imprime_matriz(matrizTransposta, m, n);

    return 0;

}