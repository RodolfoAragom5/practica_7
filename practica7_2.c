#include <stdio.h>
int main(){
  char op='\0';
  printf("\tMenú\n\n");
  printf("Elegir la opción deseada\n");
  printf("a) Ingresar \n");
  printf("b) Registrarse\n");
  printf("c) Salir \n");
  scanf("%c", &op);
  switch(op)
  {
    Default:
      printf("Opción no valida. \n");
      break;
        case 'a':
          printf("Se seleccinó 'ingresar´.\n");
          break;
        case 'b':
          printf("se seleccionó 'Resgistrarse'.\n");
          break;
        case 'c':
          printf("Se seleccionó 'salir'. \n");
          break;
  }
return 0;
}
