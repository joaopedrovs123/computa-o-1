#include<stdio.h>

int qualomaiornumero(int a, int b);

int main(){
int a,b,x,maior;

printf("digite um numero inteiro \n");
scanf("%d",&a);
printf("digite outro valo inteiro \n");
scanf("%d",&b);

x = qualomaiornumero(a,b);
printf("o maior numero eh %d \n",x);


maior = qualomaiornumero(a,b);

return 0;
}
int qualomaiornumero(int a,int b)
{
if ((a-b)>0)
{
   return(a);
}
else 
{
    return(b);
}
}