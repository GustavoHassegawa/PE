#include <stdio.h>

int numeroprimo(int numero){
    int divisor;
    for (divisor = 2; divisor < numero; divisor++)
        if(numero % divisor == 0)
            return 0;
    return 1;
}

int imprime_primos(int a){
    int i;
    for (i = 1; i <= a; i++){
        if (numeroprimo(i))
            printf("%d ", i);
    }
}

int main(){
    int n;
    printf("Insira um numero:\n");
    scanf("%d", &n);
    imprime_primos(n);
}