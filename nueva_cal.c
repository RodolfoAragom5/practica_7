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

  printf("Dime la operación que quieres usar");
  printf("1.- SUMA\n");
  printf("2.- RESTA\n");
  printf("3.- MULTIPLICACION\n");
  printf("4.- DIVISION\n");
  scanf("%d",&option);
  
  switch(opcion)
  {
    default:
      respuesta = 0;
      break;
    case 1:
      respuesta = suma(a,b);
      break;
    case 2:
      respuesta = resta(a,b);
      break;
    case 3:
      respuesta = mult(a,b);
      break;
    case 4:
      respuesta = divi(a,b);
      break;
    case 5:
      respuesta = pot(a,b);
      break;
  }

  printf("El resultado de la operación es: %d\n", respuesta);
  return 0;
}
