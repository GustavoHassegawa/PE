#include <stdio.h>

float celsius_para_fahrenheit(float temperaturaCelsius){
    return (9*temperaturaCelsius)/5+32;
}

float fahrenheit_para_celsius(float temperaturaFahrenheit){
    return 5*(temperaturaFahrenheit-32)/9;
}

int main(){
    int escolha;
    float temperatura;
    printf("Digite '0' para converter de Celsius para Fahrenheit\n"
           "Digite '1' para converter de Fahrenheit para Celsius:\n");
    scanf("%d", &escolha);
    if (escolha == 0){
        printf("Digite a temperatura em Celsius:");
        scanf("%f", &temperatura);
        printf("A temperatura convertida e %.2f F",celsius_para_fahrenheit(temperatura));
    } else if(escolha ==1){
        printf("Digite a temperatura em Fahrenheit:");
        scanf("%f", &temperatura);
        printf("A temperatura convertida e %.2f C",fahrenheit_para_celsius(temperatura));
    } else{
        printf("NAO EXISTE ESSA OPCAO !!!!!!!!");
    }
}