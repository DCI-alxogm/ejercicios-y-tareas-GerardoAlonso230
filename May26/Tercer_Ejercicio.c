/*Tercer ejercicio sin argumentos sin entrada pero con salida
Gerardo A
*/

#include <stdio.h>

// Función sin entrada pero con salida (suma fija)
int sumaFija() {
    int a = 5, b = 3;
    return a + b; // Retorna un valor
}

int main() {
    FILE *fin = fopen("entrada3.txt", "r");
    if (fin == NULL) {
        printf("No se pudo abrir el archivo entrada3.txt\n");
        return 1;
    }

    int resultado = sumaFija(); // Llamada sin argumentos
    printf("La suma fija es: %d\n", resultado);

    fclose(fin); // Siempre que abras, hay que cerrar
    return 0;
}

