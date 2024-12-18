#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char **all_bit_string(int n) {
    char **conjunto;

    if (n == 1) {
        conjunto = malloc(2 * sizeof(char));
        conjunto[0] = malloc(2 * sizeof(char));
        conjunto[1] = malloc(2 * sizeof(char));
        strcpy(conjunto[0], "0");
        strcpy(conjunto[1], "1");
        return conjunto;

    } else {
        char **subConjunto = all_bit_string(n-1);
        int numeroSequencias = pow(2,n);

        conjunto = malloc(numeroSequencias * sizeof(char *));

        int j = 0;

        for (int i  = 0; i < numeroSequencias/2; i++) {
            conjunto[j] = malloc(n + 1);
            strcpy(conjunto[j], "0");
            strcat(conjunto[j], subConjunto[i]);
            j++;

            conjunto[j] = malloc(n + 1);
            strcpy(conjunto[j], "1");
            strcat(conjunto[j], subConjunto[i]);
            j++;
        }

        for (int i = 0; i < numeroSequencias/2; i++) {
            free(subConjunto[i]);
        }
        free(subConjunto);

        return conjunto;
    }
}

void list_all_bit_strings(int n) {
    char **conjunto = all_bit_string(n);

    for (int i = 0; i < pow(2,n); i++) {
        printf("%s\n", conjunto[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    list_all_bit_strings(n);
    return 0;
}