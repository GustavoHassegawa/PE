/*Questão 6. Escreva um programa que, dados dois inteiros n e m, onde 1 ≤ n,
 *m ≤ 1000, leia uma matriz A de ordem n×m e verifique se a matriz A é simétrica.
 *Lembre-se que uma matriz é simétrica se e somente se Ai, j = Aj,i.*/
 #include <stdio.h>
 #define MAX 1000

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

int verifica_simetria(int matriz[][MAX], int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m;  j++)
            if (matriz[i][j] != matriz[j][i])
                return 0;
    return 1;
}

int main() {
    int matrizA[MAX][MAX], n, m;

    printf("Insira o valor n da matriz: ");
    scanf("%d", &n);
    printf("Insira o valor m da matriz: ");
    scanf("%d", &m);

    printf("Defina os valores da matriz A:\n");
    le_matriz(matrizA, n, m);
    imprime_matriz(matrizA, n, m);

    if (verifica_simetria(matrizA, n, m) == 1){
        printf("simetrico\n");
    } else {
        printf("Nao simetrico\n");
    }
}