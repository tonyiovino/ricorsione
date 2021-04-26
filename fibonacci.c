#include <stdio.h>

int fibonacci(int n);

int main(void){

    int n;
    int i;

    for (i = 0; i < 10; i++) {
        n = fibonacci(i);
        printf("%d ", n);
    }

    putchar('\n');

    return 0;
}

int fibonacci(int n){

    if (n == 0 || n == 1) return n;

    return fibonacci(n-1) + fibonacci(n-2);
}
