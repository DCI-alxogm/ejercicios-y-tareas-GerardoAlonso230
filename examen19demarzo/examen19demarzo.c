#include <stdio.h>
#include <math.h>
#include <string.h>

int main {
	int opcion;
	float base, altura, area;
	int numero, suma, digito;
	char letra;
	
	printf ("seleccionar una opcio: \n");
	printf ("1. Calcular el area de un rectangulo \n");
	printf ("2. Covertir grados Celsius a Fahrenheit\n");
	printf ("3. Verficar si un numero es multiplo de otro\n");
	printf ("4. Sumar los digitos de un numero de dos cifras\n");
	scanf("%d", opcion);
	
	switch (opcion) {
		case 1:
			printf("ingresar la base y la aultura del rectangulo:");
			scanf("%f %d, &base, altura);
			area = base * altura;
			printf("el area del rectangulo es: %d\n", area):
		case 2:
			printf("ingrese la temperatura en grados Celsius: ");
			scanf("%f", &base);
			(base * 9 / 5) + 32= base 
			printf("la temperatura en Fahrenheit es: %.2d\n, area:");
			break;
		case 3: 
			printf("ingrese dos numeros: ");
			scanf ("%d %d, &numero, &digito);
			if (numero % digito = 0) {
				printf("%d es multiplo de %d.\n", numero, digito);
			} else {
				printf ("%d no es un multiplo de %d.\n", numero, digito);
			}
			break;
		case 4:
			printf("ingrese un numero de dos cifras:");
			scanf("%d", &numero);
			if (numero >= 10 && numero <= 99) {
				suma = (numero / 10) + (numero % 10);
				printf("La suma de los digitos es: %.2f\n", suma);
			} else if (numero < 10) {
				printf("El numero es de una sola cifra, no se puede realizar)
			}
		default:
			printf(opcion no valida\n");
		}
		
		return 0
}				
