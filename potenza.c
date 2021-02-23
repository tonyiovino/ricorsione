#include <stdio.h>

int potenza(int b, int e);

int main(void){
    
    int b;
    int e;

    printf("Potenza\n\n");

    printf("Inserisci la base: ");
    scanf("%d", &b);

    do {
        printf("Inserisci l'esponente: ");
        scanf("%d", &e);
    }while (e < 0);

    printf("%d^%d = %d", b, e, potenza(b, e));

    putchar('\n');

    return 0;
}

int potenza(int b, int e){

    if (e == 1) {
        return b;
    }
    else if (e == 0) {
        return 1;
    }

    return b * potenza(b, e-1);
}