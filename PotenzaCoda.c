#include <stdio.h>

int potenza_helper(int a, int b, int parziale);
int potenza(int a, int b);

int main(void){

	int a, b;
	int pow = 0;

	printf("Inserisci la potenza (es. 3^2): ");
	scanf("%d^%d", &a, &b);

	pow = potenza(a, b);
	printf("%d^%d = %d\n", a, b, pow);

	return 0;
}

int potenza(int a, int b){
	return potenza_helper(a, b, 1);
}

int potenza_helper(int a, int b, int parziale){

	if (b == 1) return parziale * a;

	return potenza_helper(a, b-1, parziale*a);
}