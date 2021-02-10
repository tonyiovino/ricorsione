#include <stdio.h>

int somma_step1(int a, int b);

int main(void){

    int a, b;
    int somma = 0;
    int i;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    do {        
        printf("Inserisci il secondo numero: ");
        scanf("%d", &b);
        if (b < 0) printf("NON deve essere negativo\n\n");
    }while (b < 0);

    somma = somma_step1(a, b);
    printf("%d\n", somma);

    return 0;
}

int somma_step1(int a, int b){ 

    if (b == 0) return a;

    return somma_step1(a+1, b-1);
}
