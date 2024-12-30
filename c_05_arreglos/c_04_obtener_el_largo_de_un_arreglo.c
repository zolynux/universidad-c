#include <stdio.h>

int main()
{
  // Definir un arreglo
  int numerosArreglo[] = {100, 200, 300, 400, 500};

  int largoArreglo;
  // Obtener el largo del arreglo dinamicamente
  // Memoria ocupada por todo el arreglo
  int tamanioArreglo = sizeof(numerosArreglo); // 5 x 4 = 20
  printf("Tamanio arreglo: %d\n", tamanioArreglo);

  // Memoria ocupada por un solo elemento
  int tamanioUnElemento = sizeof(numerosArreglo[0]);
  printf("Tamanio de un elemento del arreglo: %d\n", tamanioUnElemento);

  largoArreglo = tamanioArreglo / tamanioUnElemento;
  printf("Largo arreglo: %d\n", largoArreglo);

  // Iterar un arreglo
  printf("Iteramos los valores del arreglo:\n");
  for (int i = 0; i < largoArreglo; i++)
  {
    printf("Arreglo[%d] = %d\n", i, numerosArreglo[i]);
  }

  return 0;
}