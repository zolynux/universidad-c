#include <stdio.h>

int main()
{
  // Definir una matriz
  const int RENGLONES = 2;
  const int COLUMNAS = 3;
  int matriz[RENGLONES][COLUMNAS];

  // Modificar los valores de la matriz
  matriz[0][0] = 100;
  matriz[0][1] = 200;
  matriz[0][2] = 300;
  matriz[1][0] = 400;
  matriz[1][1] = 500;
  matriz[1][2] = 600;

  // Leer los valores de la matriz
  // int valor1 = matriz[0][0]
  printf("%d\n", matriz[0][0]); // -> 100
  printf("%d\n", matriz[1][2]); // -> 600

  return 0;
}