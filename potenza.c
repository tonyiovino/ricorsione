#include <stdio.h>

int potenza(int num);

int main(void){
    
    int num;

    printf("Potenza\n\n");

    do {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
    } while (num < 0);

    num = potenza(num);

    printf("Potenza: %d", num);

    putchar('\n');

    return 0;
}

int potenza(int num){

    static int esponente;

    if (esponente == 1) {
        return num;
    }

    esponente--;

    return num * potenza(num);
}