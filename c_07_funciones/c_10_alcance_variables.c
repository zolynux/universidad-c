#include <stdio.h>

// Variables globales
int variableGlobal = 10;

void miFuncion(int variableLocalFuncion)
{
  variableLocalFuncion = 40;
  variableGlobal = 50;
}

int main()
{
  // Variable local metodo main
  int variableLocalMain = 20;

  miFuncion(30);

  variableGlobal = 60;
  // Imprimimos valores
  printf("\nVariable locla main: %d", variableLocalMain);
  printf("\nVariable global: %d", variableGlobal);

  return 0;
}