#include <stdio.h>

// lê n inteiros fornecidos pelo usuário e armazena -os no vetor entrada
void le_vetor ( int entrada [] , int n){
    printf("Insira os valores do vetor de tamanho");
    for (int i = 0; i < n; i++){
        scanf("%d", &entrada[i]);
    }
}

// retorna o valor mínimo do vetor v que tem n elementos
int minimo ( int v [] , int n){
    int min = v[0];
    for (int i = 1; i < n; i++){
        if(min > v[i]){
            min = v[i];
        }
    }
    return min;
}

// retorna o valor máximo do vetor v que tem n elementos
int maximo ( int v [] , int n) {
    int max = v[0];
    for (int i = 1; i < n; i++){
        if(max < v[i]){
            max = v[i];
        }
    }
    return max;
}

// retorna a média dos elementos guardados em um vetor v de n elementos
double media ( int v [] , int n ) {
    double soma = 0;
    for (int i = 0; i < n; i++){
        soma += v[i];
    }
    return soma/n;
}

int main(){
    int n, min, max;
    double med;
    printf("Qual o tamanho n da sequencia?");
    scanf("%d",&n);
    int vetor[100];
    le_vetor(vetor,n);
    min = minimo(vetor,n);
    max = maximo(vetor,n);
    med = media(vetor,n);
    printf("Minimo: %d\nMaximo: %d\nMedia: %.2f", min,max,med);
}
