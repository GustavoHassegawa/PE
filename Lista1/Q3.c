#include <stdio.h>

int fatorial(int numero){
    int i, fatorial = 1;
    for (i = 1; i <= numero; i++){
        fatorial *= i;
    }
    return fatorial;
}

int main(){
    int n;
    printf("Insira o valor de n:");
    scanf("%d", &n);
    printf("O valor fatorial de %d e %d", n, fatorial(n));
}