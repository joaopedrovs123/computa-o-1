#include <stdio.h>
int main() {
 int prof;
 int aluno;
 int total;
printf("quantos alunos vão?");
scanf("%d",&aluno);
printf("quantos professores vão?");
 scanf("%d",&prof);
 total = (aluno + prof);
 if (total <= 50)
 {
    printf("boa viagem"); 
 }
 else 
 {
     printf("pessoas de mais");
 }
 return 0;
}

