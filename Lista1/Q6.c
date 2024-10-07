#include <stdio.h>

int primo(int num){
    if (num <=1){
        return 0;
    } else if (num == 2){           
        return 1;
    } else if(num%2 == 0){
        return 0;
    } else {
        for(int i = 3; i < num; i += 2){
            if (num%i == 0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int n,nprimo = 2;
    printf("Quantos numeros primos voce deseja imprimir?");
    scanf("%d", &n);
    while(n > 0){
        if(primo(nprimo) == 1){
            printf("%d ", nprimo);
            n--;
            nprimo++;
        } else {
            nprimo++;
        }
    }
    return 0;
}