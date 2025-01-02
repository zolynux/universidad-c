#include <stdio.h>

// Paso por referencia
void cambiarValor(int *parametro)
{
  // Desreferencia podemos modificar el valor de la variable
  *parametro = 20;
}

int main()
{
  int argumento = 10;
  printf("Antes de llamar la funcion: %d", argumento);
  cambiarValor(&argumento);
  printf("\nDespues de llamar la funcion: %d", argumento);

  return 0;
}