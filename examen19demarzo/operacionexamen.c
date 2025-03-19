#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c, x;
 
    // Solicitar valores al usuario
    printf("Ingrese los valores de a, b y c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
 
    // Calcular el valor de x
    x = (sin(a + pow(b, 2)) + cos(c / 2) * b) / (1 + exp(-a) + sqrt(fabs(b - c)));
 
    // Imprimir el resultado
    printf("El valor de x es: %.4f\n", x);
 
    return 0;
}
 
