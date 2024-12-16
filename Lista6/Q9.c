#include <stdio.h>

int binomio(int n, int k) {
    if (k > n)
        return 0;
    else if (k == 0 || k == n)
        return 1;
    else
        return binomio(n - 1, k) + binomio(n - 1, k - 1);
}

int main() {
    int n, k;

    scanf("%d", &n);
    scanf("%d", &k);
    
    printf("%d\n", binomio(n, k));

    return 0;
}