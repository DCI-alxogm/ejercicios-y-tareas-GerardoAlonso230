/*Tercer ejercicio sin argumentos con entrada y con salida
Gerardo A
*/

#include <stdio.h>

// Función con entrada y salida (calcula cubo)
float calcularCubo(float num) {
    return num * num * num; // Retorna el cubo del argumento
}

int main() {
    FILE *fin = fopen("entrada4.txt", "r");
    if (fin == NULL) {
        printf("No se pudo abrir el archivo entrada4.txt\n");
        return 1;
    }

    float x;
    printf("Ingrese un número: ");
    scanf("%f", &x);
    float cubo = calcularCubo(x); // Llamada con argumento y retorno
    printf("El cubo de %.2f es %.2f\n", x, cubo);

    fclose(fin);
    return 0;
}

