#include <stdio.h>

int fatorial(int numero){
    int i, fatorial = 1;
    for (i = 1; i<=numero; i++){
        fatorial *=i;
    }
    return fatorial;
}

int binomio(int n, int k){
    int fatorial_de_n, fatorial_de_k, fatorial_da_diferenca;
    if (k>n){
        printf("K > N");
        return 0;
    }
    fatorial_da_diferenca = fatorial(n-k);
    fatorial_de_n = fatorial(n);
    fatorial_de_k = fatorial(k);

    return fatorial_de_n/(fatorial_de_k*fatorial_da_diferenca);
}
int main(){
    int n, k;
    printf("Insira o valor de n e k");
    scanf("%d %d", &n, &k);
    printf("%d", binomio(n,k));
}