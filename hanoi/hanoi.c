#include <stdio.h>
#include "hanoi.h"

void sposta(int n_dischi, int from, int to, int temp){

    if (n_dischi == 1){
        printf("%d --> %d\n", from, to);
        return;
    }
    sposta(n_dischi-1, from, temp, to);
    sposta(1, from, to, temp);
    sposta(n_dischi-1, temp, to, from);
}

int hanoi__calcola_passi(int n_dischi, int passi){

    if (n_dischi == 1) {
        return 1;
    }
    return 2 * hanoi__calcola_passi(n_dischi-1, passi) + 1;
}