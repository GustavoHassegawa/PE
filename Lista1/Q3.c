#include <stdio.h>

int fatorial(int num){
    int i, fat = 1;
    for (i = 1; i <= num; i++){
        fat *= i;
    }
    return fat;
}

int main(){
    int n;
    printf("Insira o valor de n:");
    scanf("%d", &n);
    printf("O valor fatorial de %d e %d", n, fatorial(n));
}