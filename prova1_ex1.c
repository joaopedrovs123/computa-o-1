#include <stdio.h>
#include <math.h>

#define J 10
#define A 1

int main() {
    int quantidade_1, quantidade_2;
    float valor;

   
    printf("Digite a quantidade do item 1:\n");
    scanf("%d", &quantidade_1);

 
    printf("Digite a quantidade do item 2:\n");
    scanf("%d", &quantidade_2); 

    valor = ((quantidade_1 + quantidade_2) * (J - A)) / 2;

   
    if (valor > quantidade_1) {
        printf("O resultado é %.2f e as quantidades são %d e %d\n", valor, quantidade_1, quantidade_2);
    } else {
        printf("O resultado é %.2f e as quantidades são %d e %d\n", valor * 0.8, quantidade_1, quantidade_2);
    }

    return 0;
}

