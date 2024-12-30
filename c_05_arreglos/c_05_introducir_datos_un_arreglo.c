#include <stdio.h>

int main()
{
  // Introducir valores de manera dinamica al arreglo
  int numeroElementos;
  printf("Proporciona el tamanio del arreglo: ");
  scanf("%d", &numeroElementos);

  // Crear el arreglo
  int numeros[numeroElementos];
  // Solicitamos al usuario los valores
  for (int i = 0; i < numeroElementos; i++)
  {
    printf("Arreglo[%d] = ", i);
    scanf("%d", &numeros[i]);
  }

  // Mandamos a imprimir
  for (int i = 0; i < numeroElementos; i++)
  {
    printf("\nArreglo[%d] = %d", i, numeros[i]);
  }

  return 0;
}