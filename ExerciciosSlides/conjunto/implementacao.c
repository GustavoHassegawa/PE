#include <stdio.h>
#include "conjunto.h"

int main() {
    Conjunto a = conjunto_vazio();
    Conjunto b = conjunto_vazio();
    printf("Conjunto A\n");
    a = conjunto_le();
    printf("Conjunto B\n");
    b = conjunto_le();

    printf("Uniao: ");
    conjunto_imprime(conjunto_uniao(a,b));
    printf("\nIntersecao: ");
    conjunto_imprime(conjunto_intersecao(a,b));
    printf("\nDiferenca: ");
    conjunto_imprime(conjunto_diferenca(a,b));

    printf("\nAdicionando 42 ao conjunto A: ");
    Conjunto c = conjunto_adiciona(a,42);
    conjunto_imprime(c);

    printf("\n42 pertence ao novo conjunto? ");
    if (conjunto_pertence(c,42))
        printf("Sim\n");
    else
        printf("Nao\n");
    
    return 0;
}