#include <stdio.h>

#define TAMANHO 10


float calculaMedia(int vetor[], int tamanho)
{
	int soma = 0;
	for (int i = 0; i < tamanho; i++)
	{
		soma += vetor[i];
	}
	return (float)soma / tamanho;
}

int main() {
	int numeros[TAMANHO];
	FILE *arquivo;


	arquivo = fopen("numeros.txt", "w");
	if (arquivo == NULL)
	{
		printf("erro ao criar.\n");
		return 1;
	}


	printf("digite 10 numeros inteiros:\n");
	for (int i = 0; i < TAMANHO; i++)
	{
		scanf("%d", &numeros[i]);
		fprintf(arquivo, "%d\n", numeros[i]);
	}

	fclose(arquivo);


	arquivo = fopen("numeros.txt", "r");
	if (arquivo == NULL)
	{
		printf("erro ao abrir.\n");
		return 1;
	}


	for (int i = 0; i < TAMANHO; i++)
	{
		fscanf(arquivo, "%d", &numeros[i]);
	}

	fclose(arquivo);


	float media = calculaMedia(numeros, TAMANHO);


	printf("\nnumeros lidos do arquivo:\n");
	for (int i = 0; i < TAMANHO; i++)
	{
		printf("%d ", numeros[i]);
	}

	printf("\nmedia dos numeros: %.2f\n", media);



	return 0;
}
