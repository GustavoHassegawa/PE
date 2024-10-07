#include <stdio.h>

int imprime_par(int a){
    int i;
    if (a % 2 != 0){
        a--;
    }
    for (i = 0; i <= a; i+=2){
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
