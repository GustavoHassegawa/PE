#include <stdio.h>

int primo(int numero){
    if (numero <=1){
        return 0;
    } else if (numero == 2){           
        return 1;
    } else if(numero%2 == 0){
        return 0;
    } else {
        for(int i = 3; i < numero; i += 2){
            if (numero%i == 0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int n,numeroprimo = 2;
    printf("Quantos numeros primos voce deseja imprimir?");
    scanf("%d", &n);
    while(n > 0){
        if(primo(numeroprimo) == 1){
            printf("%d ", numeroprimo);
            n--;
            numeroprimo++;
        } else {
            numeroprimo++;
        }
    }
    return 0;
}