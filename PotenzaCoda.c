#include <stdio.h>

int potenza_helper(int a, int x, int parziale);
int potenza(int a, int x);

int main(void){

	int a, x;
	int pow;

	printf("Inserisci la potenza (es. 3^2): ");
	scanf("%d^%d", &a, &x);

	pow = potenza(a, x);
	printf("%d^%d = %d\n", a, x, pow);

	return 0;
}

int potenza(int a, int x){
	return potenza_helper(a, x, 1);
}

int potenza_helper(int a, int x, int parziale){

	if (x == 1) return parziale * a;

	return potenza_helper(a, x-1, parziale*a);
}