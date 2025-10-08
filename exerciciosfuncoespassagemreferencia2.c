#include <stdio.h>
#include <math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2) {
    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        return 0; 
    } else if (delta == 0) {
        *x1 = -b / (2 * a);
        return 1;  
    } else {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2; 
    }
}

int main() {
    float a, b, c;
    float x1, x2;
    int resultado = calcula_raizes(a, b, c, &x1, &x2);
      
      printf("digite tres valores [a,b,c] e dois valores [x1,x2] \n");
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        scanf("%f",&x1); 
        scanf("%f",&x2);

    if (resultado == 0)
        printf("Nenhuma raiz real.\n");
    else if (resultado == 1)
        printf("Uma raiz real: %.2f\n", x1);
    else
        printf("Duas raízes reais: %.2f e %.2f\n", x1, x2);

    return 0;
}
