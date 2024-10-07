#include <stdio.h>

void produto_hadamard ( double u [] , double v [] , double resultado [], int n){
    for (int i = 0; i < n; i++){
        resultado[i] = u[i] * v[i];
    }
}

void insere_vetor (double lista[], int n){
    printf("Insira %d numeros: ", n);
    for (int i = 0; i < n; i++){
        scanf("%lf", &lista[i]);
    }
}

void imprime_vetor(double lista[], int n){
    for (int i = 0; i < n; i++){
        printf("%.2f ", lista[i]);
    }
    printf("\n");
}

int main(){
    int n;
    double u[100], v[100], result[100];
    printf("Insira do valor de n: ");
    scanf("%d", &n);
    if ( n < 1 || n > 100){
        return 0;
    }
    insere_vetor(u, n);
    insere_vetor(v, n);
    produto_hadamard(u,v,result,n);
    imprime_vetor(result,n);
}