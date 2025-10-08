#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
    int vetor1[N], vetor2[N], soma[N];
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        vetor1[i] = rand() % 100;
        vetor2[i] = rand() % 100;
        soma[i] = vetor1[i] + vetor2[i];
    }

    printf("Vetor 1: ");
    for (int i = 0; i < N; i++) printf("%d ", vetor1[i]);
    printf("\n");

    printf("Vetor 2: ");
    for (int i = 0; i < N; i++) printf("%d ", vetor2[i]);
    printf("\n");

    printf("Soma dos vetores: ");
    for (int i = 0; i < N; i++) printf("%d ", soma[i]);
    printf("\n");

    return 0;
}
