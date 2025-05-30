#include <stdio.h>
 
int main() {
    int numeros[6] = {10, 20, 30, 40, 50, 60};
    int *ptr = numeros; // Apuntador apunta al inicio del arreglo
    int suma = 0;
    
    for(int i = 0; i < 6; i++) {
        suma += *ptr; // Suma el valor actual
        ptr++;        // Mueve el apuntador al siguiente elemento
    }
    
    printf("La suma de los 6 números es: %d\n", suma);
    return 0;
}
 
