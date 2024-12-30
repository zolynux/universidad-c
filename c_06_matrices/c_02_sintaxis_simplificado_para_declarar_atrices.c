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

  // Leer los valores de la matriz
  // int valor1 = matriz[0][0]
  printf("%d\n", matriz[0][0]); // -> 100
  printf("%d\n", matriz[1][2]); // -> 600

  return 0;
}