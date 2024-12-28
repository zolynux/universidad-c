#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Operadores Lógicos
  bool a = true;  // Verdadero - 1
  bool b = false; // Falso - 0
  printf("Valor a: %d\n", a);
  printf("Valor b: %d\n", b);

  // Operador Lógico && (and - y)
  // Regresa verdadero si ambos operados son verdaderos
  bool c = a && b;
  printf("Resultado operador and: %d\n", c);

  // Operador Lógico || (or - o)
  // Regresa verdadero si cualquier operador es verdadero
  c = a || b;
  printf("Resultado operador or: %d\n", c);

  // Operador Lógico ! (not - NO)
  // Invierte el resultado lógico
  c = !a;
  printf("Resultado operador not: %d\n", c);

  return 0;
}