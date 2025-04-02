#include <stdio.h>
#include <math.h>
 
int main() {
    float inicio, fin, paso, x;
    
    // Leer valores de entrada
    scanf("%f %f %f", &inicio, &fin, &paso);
    
    // Calcular y mostrar resultados
    for(x = inicio; x <= fin; x += paso) {
        printf("%.2f ", x);
        printf("%.2f ", exp(x));
        
        if(x > 0) {
            printf("%.2f ", log(x));
        } else {
            printf("NaN ");
        }
        
        printf("%.2f ", sin(x));
        printf("%.2f ", cos(x));
        
        if(x >= 0) {
            printf("%.2f\n", sqrt(x));
        } else {
            printf("NaN\n");
        }
    }
    
    return 0;
}
