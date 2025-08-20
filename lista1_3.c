#include <stdio.h>
int main() {
	int in;
	char ch;
	float fl;

	printf("digite um caractere");
	scanf("%c",&ch);
	printf("digite um numero inteiro");
	scanf("%d",&in);
	printf("digite um numero nao inteiro");
	scanf("%f",&fl);

	printf("%c, %d, %.2f",ch,in,fl);

	return 0;
}