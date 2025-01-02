#include <stdio.h>

// Declarar una funcion
void funcionRecursiva(int numero)
{
  // Caso Base
  if (numero == 1)
  {
    printf("%d\n", numero);
  }
  else
  {
    // Caso Recursivo
    funcionRecursiva(numero - 1);
    printf("%d\n", numero);
  }
}

int main()
{
  // Imprimir 5 al 1
  int valor = 5;
  funcionRecursiva(valor);

  return 0;
}