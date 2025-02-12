/*Febrero 12, programa de variables, imprimir 
Fidel Gerardo ALonso Gomez*/
#include <stdlib.h> //librería estándar de C.
#include <stdio.h> //Librería para interacción con la pantalla.

int main(){
 char nombre[10];
 int edad;
 float temperatura;
 //Cuerpo del programa;
 printf ("¿Cuál es tu nombre? \n");
 scanf("%s", nombre);
 printf ("Hola, %s este es el segundo programa del curso PB2025\n", nombre); 
 
 printf ("Introduce tu edad \n");
 scanf("%i", &edad);
 printf ("¿Que temperatura marco el termometro la ultima vez? \n", nombre); 
 scanf("%f", &temperatura);
 
 printf ("tu edad es: %i\n", edad);
 printf ("tu ultimo registro de temperatura fue: %f\n", temperatura);
 
  printf ("Entonces tu nombre es %s y tu ultima temperatura fue %f y tienes %i", nombre, temperatura, edad);
 } 
