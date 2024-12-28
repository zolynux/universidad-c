#include <stdio.h>

int main()
{
  // Operadores de incremento
  int a, b, c;
  a = 0;

  // Pre-incremento
  ++a; // Primero se incrementa el valor
  printf("Nuevo valor de a: %d\n", a);

  // Post-incremento
  // Se usa el valor de la variable y después se incrementa
  printf("Valor de 'a' sin incrementar (a++): %d\n", a++);
  printf("Valor de 'a' ya que incrementarse (a): %d\n", a);

  // Ejemplo
  a = 5;
  b = 2;
  c = ++a * b++;
  printf("Valor a: %d\n", a);
  printf("Valor b: %d\n", b);
  printf("Valor c: %d\n", c);

  // Operadores de decremento
  a = 5;
  b = 2;
  c = --a * b--;
  printf("Valor a: %d\n", a); // No tenia un decremento pendiente
  printf("Valor b: %d\n", b); // tenia un decremento pendiente
  printf("Valor c: %d\n", c);

  return 0;
}