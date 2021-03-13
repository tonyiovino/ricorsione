#include <stdio.h>

int potenza_helper(int a, int x, int parziale);
int potenza(int a, int x);

int main(void){

	int a, x;
	int pow;

	do {
		printf("Inserisci la potenza (es. 3^2): ");
		scanf("%d^%d", &a, &x);
	} while (x < 0);

	pow = potenza(a, x);
	printf("%d^%d = %d\n", a, x, pow);

	return 0;
}

int potenza(int a, int x){
	return potenza_helper(a, x, 1);
}

int potenza_helper(int a, int x, int parziale){

	if (x == 1) return parziale * a;
	else if (x == 0) return 1;

	return potenza_helper(a, x-1, parziale*a);
}