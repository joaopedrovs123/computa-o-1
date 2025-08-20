#include <stdio.h>
int main() {

	float n1,n2,aux;


	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	scanf("%f", &n2);
	aux = n1 + n2;
	printf("a soma eh igual a %.2f", aux );

	return 0;
}