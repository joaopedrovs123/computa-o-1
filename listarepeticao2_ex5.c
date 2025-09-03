#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a, i = 0;
	int max = 5;
	int min = 1;

	srand(time(0));
	int numale = min + rand() % (max - min + 1);

	printf("Digite um numero entre %d e %d:\n", min, max);
	scanf("%d", &a);

	while (i < 500) {
		if (a < numale)
		{
			printf("O numero eh maior que o numero magico, tente novamente:\n");
		}
		else if (a > numale)
		{
			printf("O numero eh menor que o numero magico, tente novamente:\n");
		}
		else
		{
			printf("Parabens! Voce acertou em %d tentativas.\n", i + 1);
			break;
		}

		scanf("%d", &a); 
		i++;
	}
    
    
   if (i<=3)
    {
        printf("grupo A |o/" );
    }
    else if (i>=4 && i <=6)
    {
        printf("grupo B  :-D ");
    }
    else if (7<=i && i<=10)
    {
        printf("grupo C :-)");
    }
    else
    {
        printf("grupo D :-( ");
    }
    
    
    
    
	return 0;
}
