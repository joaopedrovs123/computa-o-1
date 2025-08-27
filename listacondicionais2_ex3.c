#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite tres valores para formar um triangulo:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    // Verifica se os valores formam um triângulo (Regra do Triângulo)
    if (a + b > c && a + c > b && b + c > a) {
        printf("É um triângulo.\n");

        // Verifica o tipo de triângulo
        if (a == b && b == c) {
            printf("O triângulo é equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("Não é um triângulo.\n");
    }

    return 0;
}
