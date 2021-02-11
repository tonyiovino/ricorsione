#include <stdio.h>

int inverti_cifre(int num);

int main(void){
    
    int num;

    printf("Inverte Cifre\n\n");

    do {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
    } while (num < 0);

    num = inverti_cifre(num);

    printf("A cifre invertite: %d", num);

    putchar('\n');

    return 0;
}

int inverti_cifre(int num){

    static int numInverso = 0;

    if (num <= 0) {
        return numInverso;
    }

    numInverso = (numInverso * 10) + num % 10;

    return inverti_cifre(num / 10);
}