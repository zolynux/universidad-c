#include <stdio.h>

int main()
{
  // Introducir datos en una matriz
  int renglones, columnas;
  printf("Proporciona el numero de renglones: ");
  scanf("%d", &renglones);
  printf("Proporciona el numero de columnas: ");
  scanf("%d", &columnas);

  // Creamos la matriz
  int matriz[renglones][columnas];

  // Introducir los valores
  for (int ren = 0; ren < renglones; ren++)
  {
    for (int col = 0; col < columnas; col++)
    {
      printf("Matriz[%d][%d] = ", ren, col);
      scanf("%d", &matriz[ren][col]);
    }
  }

  // Imprimir los valores
  printf("-----Impresion de la Matriz-----\n");
  for (int ren = 0; ren < renglones; ren++)
  {
    for (int col = 0; col < columnas; col++)
    {
      printf("%d ", matriz[ren][col]);
    }
    printf("\n");
  }
}