#include <stdio.h>

void questao01(int *a, int *b) {
    (*a)--;  
    (*b)++; 
}
    int main() {
    int x,y;
    
    printf("digite dois valores [x,y] \n");
    scanf("%d",&x);
    scanf("%d",&y);

    printf("Antes: x = %d, y = %d\n", x, y);
    questao01(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}
