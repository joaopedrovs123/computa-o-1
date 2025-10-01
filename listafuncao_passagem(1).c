#include<stdio.h>


int ehBissexto(int ano) 
{
	if (ano % 4 == 0 && ano % 400 == 0) {
		return 1;
	} else {
		return 0;
	}
}
int main() {

	int a,ano;
	a = ehBissexto(ano);
	printf("digite um ano");
	scanf("%d",&ano);

	printf("%d.\n",a);

	if (a == 1) {
		printf("sim");
	} else if (a ==0)
	{
		printf("nao");
	}
	return 0;
}