#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, term;

    printf("Quantos termos da sequência de Fibonacci você quer ver .\n ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        term = a + b;
        a = b;
        b = term;
    }

    printf("\n");
    return 0;
}
