#include <stdio.h>

void cambiarValor(int *parametro)
{
  // Cambiamos los valores del arreglo
  parametro[0] = 4;
  parametro[1] = 5;
  parametro[2] = 6;
}

int main()
{
  // Definir arreglo
  int arg[] = {1, 2, 3};
  printf("Valores arreglo antes: %d %d %d", arg[0], arg[1], arg[2]);
  cambiarValor(arg);
  printf("\nValores arreglo despues: %d %d %d", arg[0], arg[1], arg[2]);

  return 0;
}