/*Questão 3. Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100, e imprima  
 *esses números em ordem não decrescente. Para isso, você deve obrigatoriamente implementar
 *a seguinte função
 *@valores é um vetor contendo os n números que deverão ser ordenados
 *@n é a variável que diz quantos valores estão no vetor*/
 
//void ordena(int valores[], int n);
#include <stdio.h>

void le_vetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor do endereço %d\n", i);
        scanf("%d", &vetor[i]);
    }
}

void ordena(int vetor[], int tamanho) {
    int temporario = 0;

    for (int i = 0; i < tamanho-1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[i]) {
                temporario = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporario;
            }
        }
    }
}

int main(){
    int vetor[99], tamanho;

    printf("Insira o tamanho do vetor desejado:\n");
    scanf("%d", &tamanho);
    le_vetor(vetor, tamanho);
    ordena(vetor, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");
}
