//Questão 1. Implemente a seguinte função
// @valores é um vetor contendo os n números
// @n é a variável que diz quantos valores estão no vetor
// @chave é um número inteiro
// Retorno: Sua função deve retornar i se valores[i] == chave.
// Se o valor 'chave' não está no vetor, então sua função
// deve retornar -1

#include <stdio.h>
int busca(int valores[], int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (valores[i] == chave) {
            return i;
        }
    }
    return -1;
}
    
int main() {
    int vetor[1000], tamanho, chave;

    printf("Insira o tamanho do vetor desejado:\n");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor do endereco %d\n", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite a chave:\n");
    scanf("%d", &chave);
    printf("%d\n", busca(vetor, tamanho, chave));
}

