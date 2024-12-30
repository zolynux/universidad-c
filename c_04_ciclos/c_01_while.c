#include <stdio.h>

int main()
{
  // Ciclo while
  // Imprimir los numeros del 1 al 5
  int contador = 1, repeticiones = 5;

  // while
  while (contador <= repeticiones)
  {
    printf("%d\n", contador);
    contador++; // Incrementa el valor en 1
  }

  return 0;
}