#include <stdio.h>

int fibonacci(int n);

int main(void){

    int n;
    int i;

    for (i = 0; i < 10; i++) {
        n = fibonacci(i);
        printf(" %d +", n);
    }

    putchar('\n');

    return 0;
}

int fibonacci(int n){

    int n_prev;

    if (n == 0 || n == 1){
        return n;
    }

    n_prev = fibonacci(n-2);

    return fibonacci(n-1) + n_prev;
}