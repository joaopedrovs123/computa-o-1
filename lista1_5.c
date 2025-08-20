#include <stdio.h>

int main() {
	int a, b;
	int divi;
	printf("insira dois valores \n");
	scanf("%d",&a);
	scanf("%d",&b);
	float resto = a % b;
	printf("O resto da divisC#o de %d por %d eh: %.2f  \n", a, b, resto);
	divi = a / b;
	printf("a divisC#o de %d por %d eh: %.d \n", a, b, divi);
	return 0;
}
