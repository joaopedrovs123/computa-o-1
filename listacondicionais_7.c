#include <stdio.h>
#include <math.h>

int main() {
	int x,y;

	printf("insira duas coordenadas (x,y)");

	scanf("%d""%d",&x,&y );

	if (x > 0 && y > 0)
	{
		printf("primeiro quadrante");
	}
	else if (x < 0 && y > 0)
	{
		printf("segundo quadrante");
	}
	else if (x < 0 && y < 0)
	{
		printf("terceiro quadrante");
	}
	else if (x == 0 || y == 0)
	{
		printf("eixo");
	}
	else if (x == 0 && y == 0)
	{
		printf("origem");
	}
	else
	{
		printf("quarto quadrante");
	}

	return 0;
}