#include <stdio.h>

// Copia de la referencia de memoria (apuntadores)
int main()
{
  int a = 10;
  // Definimos una variable apuntador
  int *b = &a;
  // Modificamos el valor de a o *b
  // *variable -> desreferencia
  *b = 20;
  // Si imprimir los valores
  printf("Valor a: %d\n", a);
  printf("Valor *b: %d\n", *b);
  // Imprimir direcciones de memoria
  // %p -> pointer (apuntador)
  printf("Referencia &a: %p\n", &a);
  printf("Referencia (apunta) b: %p\n", b);
  printf("Referencia &b: %p\n", &b);

  return 0;
}