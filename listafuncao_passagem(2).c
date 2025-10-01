#include<stdio.h>
#include<math.h>

int arredonda(float x) {
	int parte_inteira = (int)x;
	float fracao = x - parte_inteira;

	if (fracao > 0.5 || (fracao == 0.5)) {

		return parte_inteira + 1;
	} else if (fracao < -0.5 || (fracao == -0.5)) {

		return parte_inteira - 1;
	} else {

		return (int)round(x);
	}
}


int main() {

	int a;
	float x;

	x = -2.7;

	a = arredonda(x);

	printf("%d",a);

	return 0;
}