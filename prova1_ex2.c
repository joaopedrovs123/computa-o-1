#include<stdio.h>

int main() {

	int i,qtd;
	float u,valor,preco,media;
	i=1;

	printf("quantas frutas foram vendidas");
	scanf("%d",&qtd);

	float soma = 0;

	while (i <= qtd)
	{
		printf("digite o preco da fruta %d .\n",i);
		scanf("%f",&preco);
		soma += preco;
		i++;
	}

	printf("o total arrecadado foi %f .\n", soma);

	media = (soma/i-1);

	printf("digite um valor .\n");

	scanf("%f",&u);
	if (u > 0)
	{
		while (u != media)
		{


			if(u < media)
			{
				printf("errou por menos.\n");
			}
			else if (u > media)
			{
				printf("errou por mais .\n");
			}



			printf("digite um valor");
			scanf("%f",&u);
		}

		printf("voce acertou a media .\n");
	}


	else
	{
		printf("o valor deve ser maior que 0.\n");
	}





	return 0;
}
