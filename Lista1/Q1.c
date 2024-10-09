#include <stdio.h>

int imprime_par(int numero){
    if (numero % 2 != 0){
        numero--;
    }
    for (int i = 0; i <= numero; i+=2){
        printf("%d ", i);
    }
}

int main(){
    int n;
    printf("Entre com o valor n:\n");
    scanf("%d", &n);
    printf("A sequencia de numeros pares de eh:");
    imprime_par(n);
}
