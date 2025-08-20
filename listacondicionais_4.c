#include <stdio.h>
int main() {
	int prof;
	int aluno;
	int total;
	printf("quantos alunos vC#o?");
	scanf("%d",&aluno);
	printf("quantos professores vC#o?");
	scanf("%d",&prof);
	total = (aluno + prof);
	if (total <= 50)
	{
		printf("boa viagem");
	}
	else
	{
		printf("pessoas demais");
	}
	return 0;
}

