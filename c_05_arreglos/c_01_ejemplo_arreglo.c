#include <stdio.h>

int main()
{
  // Definir un arreglo
  int numerosArreglo[5];

  // Modificar los valores de un arreglo
  numerosArreglo[0] = 13;
  numerosArreglo[1] = 21;
  numerosArreglo[4] = 62;

  // Leer los valores del arreglo
  printf("Elemento 1 - Arreglo[0] = %d\n", numerosArreglo[0]);
  printf("Elemento 2 - Arreglo[1] = %d\n", numerosArreglo[1]);
  printf("Elemento 3 - Arreglo[2] = %d\n", numerosArreglo[2]);
  printf("Elemento 4 - Arreglo[3] = %d\n", numerosArreglo[3]);
  printf("Elemento 5 - Arreglo[4] = %d\n", numerosArreglo[4]);

  return 0;
}