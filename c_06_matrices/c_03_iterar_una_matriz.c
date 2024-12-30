#include <stdio.h>
#define RENGLONES 2
#define COLUMNAS 3

int main()
{
  // Definir una matriz
  // const int RENGLONES = 2;
  // const int COLUMNAS = 3;
  int matriz[RENGLONES][COLUMNAS] = {
      {100, 200, 300},
      {400, 500, 600}};

  // Iteramos la matriz
  printf("------Iteramos la matriz------");
  for (int ren = 0; ren < RENGLONES; ren++)
  {
    printf("\nRenglon (pivote): %d", ren);
    for (int col = 0; col < COLUMNAS; col++)
    {
      printf("\nMatriz[%d][%d] = %d", ren, col, matriz[ren][col]);
    } // Fin for columnas
    printf("\n");
  } // Fin for renglones

  return 0;
}