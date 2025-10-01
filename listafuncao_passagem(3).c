#include <stdio.h>

int calculaDigitoVerificador(int num) {
    int x1 = num / 100;
    int x2 = (num / 10) % 10;
    int x3 = num % 10;

    int soma = 1 * x1 + 2 * x2 + 3 * x3;
    int x4 = ((soma % 11) % 10);

    return x4;
}

int main() {
    int num;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &num);

    int digitoVerificador = calculaDigitoVerificador(num);
    printf("Dígito verificador: %d\n", digitoVerificador);

    return 0;
}
