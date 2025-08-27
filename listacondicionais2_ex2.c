#include <stdio.h>
# include <math.h>


int main() {



	float j, k,l, A, P, G, H;
	char opcao;


	printf("selecione uma letra [A,P,G,H]respectivamente para media, aritimetica, ponderada, geometrica ou harmonica.\n");
	scanf (" %c" ".\n",&opcao);

	printf("digite tres valores [j,k,l] .\n");
	scanf("%f",&j);
	scanf("%f",&k);
	scanf("%f",&l);
	
	
	A = ((j + k + l)/3);

	P =  ((j*1 + k*2 + l*3)/6);

	G = pow((j * k * l),(1.0/3));

	H  = (3/((1.0/j)+(1.0/k)+(1.0/l)));


	if (opcao == 'A' || opcao == 'a')
	{
		printf("media aritimetica = " "%f" ".\n",A);
	}
	else if (opcao == 'P' || opcao == 'p')
	{
		printf("media ponderada = " "%f" ".\n",P);
	}
	else if (opcao == 'G' || opcao == 'g')
	{
		printf("media geometrica =" "%f" ".\n",G);
	}
	else if (opcao == 'H' || opcao == 'h')
	{
		printf("media harmonica =" "%f" ".\n",H);
	}
	else
	{
		printf("nao eh uma opcao");
	}

	return 0;
}
