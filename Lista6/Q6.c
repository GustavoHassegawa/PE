#include <stdio.h>
#include <stdlib.h>

int hanoi(char origem, char destino, int n, char aux) {
    int todosMenosBase = 0, Base = 1;

    if (n == 1) 
        return 1;
    else {
        todosMenosBase = 2 * hanoi(origem, aux, n - 1, aux);
        return todosMenosBase + Base;
    }   
}

int main() {
    printf("%d\n", hanoi('a', 'c', 3, 'b'));
    return 0;
}