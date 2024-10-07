#include <stdio.h>

int fibonacci(int n){
    if (n <= 0){
        return 0;
    } else if (n <= 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n;
    printf("Insira um valor n");
    scanf("%d", &n);
    printf("%d", fibonacci(n));
}