#include <stdio.h>

// Paso por Valor
void cambiarValor(int parametro)
{
  parametro = 20;
}

int main()
{
  int argumento = 10;
  printf("Antes de llamar funcion: %d", argumento);
  cambiarValor(argumento);
  printf("\nDespues de llamar funcion: %d", argumento);

  return 0;
}