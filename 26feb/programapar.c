//Numero par o no

#include <stdio.h>
 
int main() {
    int numero;
 
    // Solicita al usuario un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);
 
    // Verifica si el número es par o impar
    if (numero % 2 == 0) {
        printf("El número %d es par.\n", numero);
    } else {
        printf("El número %d es impar.\n", numero);
    }
 
    return 0;
}
 
