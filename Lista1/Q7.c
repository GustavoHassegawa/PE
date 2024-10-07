#include <stdio.h>

int primo(int num){
    if (num <= 1){
        return 0;
    } else if (num == 2){
        return 1;
    } else if (num%2 == 0){
        return 0;
    } else {
        for (int i = 3; i < num; i+=2){
            if (num%i == 0){
                return 0;
            }
        }
    }
    return 1;
}

int verifica_intervalo(int i, int j){
    if (i <= j){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int i,j;
    printf("Insira um intervalo [i,j]");
    scanf("%d %d" , &i, &j);
    if (verifica_intervalo(i,j) == 1){
        for (int inicio = i; inicio <= j; inicio++){
            if (primo(inicio)==1){
                printf("%d ", inicio);
            }
        }
    } else{
        printf("INTERVALO INVALIDO");
    }
}