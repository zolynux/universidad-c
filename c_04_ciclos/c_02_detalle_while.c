#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Ciclo while
  // Imprimir los numeros del 1 al 5
  int contador = 1, repeticiones = 5;

  // while
  while (contador <= repeticiones)
  {
    printf("Numero: %d\n", contador);
    contador++; // Incrementa el valor en 1
    // Condicion a evaluar
    bool condicion = contador <= repeticiones;
    printf("%d <= %d -> %d", contador, repeticiones, condicion);
  }

  return 0;
}