#include <stdio.h>
#define MAX 20

void le_matriz(int matriz[][MAX], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			printf("Insira o valor de %d,%d:\n", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

int verifica_sete(int matriz[][MAX], int i, int j) {
    for (int l = i - 1; l < i + 2; l++) 
        for (int c = j - 1; c < j + 2; c++) 
            if (matriz[l][c] != 7 && i != l && j != c) 
                return 0;
    return 1;
}

int main() {
    int n, m, area[MAX][MAX];

    printf("Detector de sabre de luz:");

    printf("Insira o valor de N: ");
    scanf("%d", &n);

    printf("Insira o valor de M: ");
    scanf("%d", &m);

    le_matriz(area, n, m);

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            if (area[i][j] == 42)
                if (verifica_sete(area, i, j) == 1)
                    printf("Coordenadas do sabre: i: %d j: %d\n", i+1, j+1);
    return 0;
}