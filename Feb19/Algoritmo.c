#include <stdio.h>
 
int main() {
    float celsius, kelvin;
 
    // Entrada: Pedir temperatura en Celsius
    printf("Introduce la temperatura en grados Celsius: ");
    scanf("%f", &celsius);
 
    // Proceso: Convertir a Kelvin
    kelvin = celsius + 273.15;
 
    // Salida: Mostrar resultado
    printf("La temperatura en Kelvin es: %.2f K\n", kelvin);
 
    return 0;
}
