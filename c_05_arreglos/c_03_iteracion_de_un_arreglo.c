#include <stdio.h>

int main()
{
  // Definir un arreglo
  int numerosArreglo[] = {100, 200, 300, 400, 500};

  // Iterar un arreglo
  printf("Iteramos los valores del arreglo:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Arreglo[%d] = %d\n", i, numerosArreglo[i]);
  }

  return 0;
}