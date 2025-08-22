#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, partereal, parteima;

    printf("insira os valores (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        float root1 = (-b + sqrt(delta)) / (2 * a);
        float root2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1: %.2f\n", root1);
        printf("x2: %.2f\n", root2);
    } else if (delta == 0) {
        float root = -b / (2 * a);
        printf("só existe uma raiz: %.2f\n", root);
    } else {
        partereal = -b / (2 * a);
        parteima = sqrt(-delta) / (2 * a);
        printf("as raizes complexas são:\n");
        printf("x1: %.2f + %.2fi\n",partereal ,parteima );
        printf("x2: %.2f - %.2fi\n", partereal,parteima );
    }

    return 0;
}