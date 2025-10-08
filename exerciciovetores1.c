#include <stdio.h>

#define TAM 10

int valorExiste(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) return 1;
    }
    return 0;
}

int main() {
    int vetor[TAM];
    int valor, i = 0;

    while (i < TAM) {
        printf("Digite um valor inteiro (%d/%d): ", i + 1, TAM);
        scanf("%d", &valor);

        if (valorExiste(vetor, i, valor)) {
            printf("Valor duplicado! Tente outro.\n");
        } else {
            vetor[i] = valor;
            i++;
        }
    }

    printf("Vetor final: ");
    for (int j = 0; j < TAM; j++) {
        printf("%d ", vetor[j]);
    }
    printf("\n");

    return 0;
}
