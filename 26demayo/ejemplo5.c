#include <stdio.h>
 
// Función con entrada y salida usando apuntador
void cuadradoPorReferencia(int *x) {
    *x = (*x) * (*x);
}
 
int main() {
    int numero = 7;
    cuadradoPorReferencia(&numero);
    printf("El cuadrado por referencia es %d\n", numero);
    return 0;
}
