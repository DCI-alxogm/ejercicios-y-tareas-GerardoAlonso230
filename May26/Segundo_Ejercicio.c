/*Segundo ejercicio función con entrada (número) pero sin salida
Gerardo A
*/

#include <stdio.h>

// Función con entrada (número) pero sin salida
void imprimirCuadrado(float num) {
    printf("El cuadrado de %.2f es %.2f\n", num, num * num);
}

int main() {
    float x;

    FILE *fin = fopen("extrada2.txt", "r"); 
    if (fin == NULL) {
        printf("No se pudo abrir el archivo extrada2.txt\n");
        return 1;
    }

    fscanf(fin, "%f", &x); // Leer el número desde el archivo
    fclose(fin);

    imprimirCuadrado(x); // Llamada con argumento

    return 0;
}

