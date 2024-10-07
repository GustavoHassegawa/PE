#include <stdio.h>

float tempctof(float TC){
    return (9*TC)/5+32;
}

float tempftoc(float TF){
    return 5*(TF-32)/9;
}

int main(){
    int escolha;
    float temp;
    printf("Digite '0' para converter de Celsius para Fahrenheit\n"
           "Digite '1' para converter de Fahrenheit para Celsius:\n");
    scanf("%d", &escolha);
    if (escolha == 0){
        printf("Digite a temperatura em Celsius:");
        scanf("%f", &temp);
        printf("A temperatura convertida e %.2f F",tempctof(temp));
    } else if(escolha ==1){
        printf("Digite a temperatura em Fahrenheit:");
        scanf("%f", &temp);
        printf("A temperatura convertida e %.2f C",tempftoc(temp));
    } else{
        printf("NAO EXISTE ESSA OPCAO !!!!!!!!");
    }
}