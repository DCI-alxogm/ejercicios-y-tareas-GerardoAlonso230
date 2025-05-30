#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int *ptr = (int *)malloc(6 * sizeof(int)); // Asigna memoria para 6 enteros
    
    if(ptr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }
    
    // Asignamos valores al arreglo
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;
    ptr[5] = 60;
    
    int suma = 0;
    for(int i = 0; i < 6; i++) {
        suma += ptr[i]; // Accedemos como arreglo
    }
    
    printf("La suma de los 6 números es: %d\n", suma);
    
    free(ptr); // Liberamos la memoria asignada
    return 0;
}
 
