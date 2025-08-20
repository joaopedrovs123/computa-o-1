#include <stdio.h>
int main() {
	int l;
	int b;
	printf("digite um lado:");
	scanf("%d",&l);
	printf("digite uma base:");
	scanf("%d",&b);
	int area = (b * l);
	int pp = (2*b + 2*l);
	if (area > pp)
	{
		printf("area eh maior %d pois perimetro eh %d",area,pp );
	}
	else if (area == pp)
	{
	    printf("são iguais");
	}
	else
	{
		printf("perimetro eh maior %d pois lado eh %d",pp,area);
	}

	return 0;
}