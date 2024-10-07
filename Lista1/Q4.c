#include <stdio.h>

int fatorial(int num){
    int i, fat = 1;
    for (i = 1; i<=num; i++){
        fat *=i;
    }
    return fat;
}

int binomio(int n, int k){
    int fat_n, fat_k, fat_diff;
    if (k>n){
        printf("K > N");
        return 0;
    }
    fat_diff = fatorial(n-k);
    fat_n = fatorial(n);
    fat_k = fatorial(k);

    return fat_n/(fat_k*fat_diff);
}

int main(){
    int n, k;
    printf("Insira o valor de n e k");
    scanf("%d %d", &n, &k);
    printf("%d", binomio(n,k));
}