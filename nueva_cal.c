/*Rodolfo Aragom Romero Sandoval 
Ejercicio 4 calculadora con funciones 
Práctica 7 27/09/24*/

#include <stdio.h>
#include <math.h>

int suma(int a, int b)
{
  resp= a + b;
  return(resp);
}
int resta(int a, int b)
{
  resp= a - b;
  return(resp);
}
int mult(int a, int b)
{
  resp= a * b;
  return(resp);
}
int divi(int a, int b)
{
  resp= a / b;
  return(resp);
}
int pot(int a, int b)
{
  resp= pow(a,b);
  return(resp);
}

int main()
{
  int a=0, b=0;
  int respuesta;

  printf("Dime que operación deseas realizar: \n");
  printf("1 .- Suma\n");
  
}
