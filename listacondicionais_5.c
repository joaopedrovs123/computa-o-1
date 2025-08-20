#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float delta, equ1, equ2;

    printf("Digite tres valores (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    delta = b*b - 4*a*c;

    if (delta < 0) {
        printf("Nao existe raiz real.\n");
    } else {
        equ1 = (-b + sqrt(delta)) / (2.0 * a);
        equ2 = (-b - sqrt(delta)) / (2.0 * a);

        printf("Raiz 1: %.2f\n", equ1);
        printf("Raiz 2: %.2f\n", equ2);
    }

    return 0;
}
