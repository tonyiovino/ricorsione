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