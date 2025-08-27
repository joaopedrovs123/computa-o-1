#include <stdio.h>
#include <math.h>

int main() {
	float A, G, Ra,Rg;

	
	printf("digite Alcool A = [reais/litro], gasolina G = [reais/litro], Ra [km/l], e Rg [km/l] nessa ordem .\n");
	scanf("%f %f %f %f", &A ,&G, &Ra , &Rg);
	
	if(A/Ra < G/Rg)
	{
	    printf("use alcool");
	}
    else 
    {
        printf("use gasolina");
    }

	return 0;
}
