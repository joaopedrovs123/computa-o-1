#include <stdio.h>


int main() {
	int i,n;
	float a, b, c, media;

	printf("quantos casos voce quer ver .\n");
	scanf("%d",&n);
	printf("vc esolheu %d casos .\n",n );


	i = 1;
	while (i <=n)
	{

		scanf("%f""%f""%f",&a,&b,&c);

		media = ((a*2)+(b*3)+(c*5))/(2+3+5);

		printf("%f"".\n",media);

		printf("escolha tres numeros .\n");

		i++;
	}
	
	return 0;

}