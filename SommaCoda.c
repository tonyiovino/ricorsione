#include <stdio.h>

int somma_step1(int a, int b, int parziale);

int main(void){

	int a, b;
	int somma = 0;

	printf("Inserisci il primo numero: ");
	scanf("%d", &a);

	do {
		printf("Inserisci il secondo numero: ");
		scanf("%d", &b);
		if (b < 0) printf("NON deve essere negativo\n\n");
	} while (b < 0);

	somma = somma_step1(a, b, 0);
	printf("Somma: %d\n", somma);

	return 0;
}

int somma_step1(int a, int b, int parziale){

	if (b == 0) return parziale + a;

	return somma_step1(a, b-1, parziale+1);
}