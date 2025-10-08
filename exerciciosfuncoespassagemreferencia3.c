#include <stdio.h>

void converteHora(int total_segundos, int *hora, int *min, int *seg) {
    *hora = total_segundos / 3600;
    *min = (total_segundos % 3600) / 60;
    *seg = total_segundos % 60;
}

int main() {
    int total_segundos, h, m, s;

    printf("Digite o total de segundos: ");
    scanf("%d", &total_segundos);

    converteHora(total_segundos, &h, &m, &s);
    printf("HH:MM:SS -> %02d:%02d:%02d\n", h, m, s);

    return 0;
}
