#include <stdio.h>
#include "hanoi.h"

int main(void){

    int num_dischi;

    do {
        printf("Inserisci il numero dei dischi da spostare: ");
        scanf("%d", &num_dischi);

        if (num_dischi <= 0 && num_dischi > 30) {
            printf("Inserisci un numero maggiore di 0!\nMa non maggiore di 30!");
        }
    } while (num_dischi <= 0 && num_dischi > 30);
    putchar('\n');

    printf("Passi: %d\n", hanoi__calcola_passi(num_dischi, 1));
    hanoi__sposta(num_dischi, 1, 3, 2);

    return 0;
}
