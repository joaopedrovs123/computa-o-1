#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void preencherVetor(int vetor[]) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 100; // valores aleatórios de 0 a 99
    }
}

void removerElemento(int vetor[], int posicao) {
    if (posicao < 0 || posicao >= N) {
        printf("Posição inválida!\n");
        return;
    }

    for (int i = posicao; i < N - 1; i++) {
        vetor[i] = vetor[i + 1];
    }
    vetor[N - 1] = 0;
}

void mostrarVetor(int vetor[]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[N];
    int posicao;

    preencherVetor(vetor);
    printf("Vetor original:\n");
    mostrarVetor(vetor);

    while (1) {
        printf("Informe a posição para remover (0 a %d, -1 para sair): ", N - 1);
        scanf("%d", &posicao);

        if (posicao == -1) break;

        removerElemento(vetor, posicao);
        printf("Vetor após remoção:\n");
        mostrarVetor(vetor);
    }

    return 0;
}
