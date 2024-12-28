#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Operadores Relacionales (comparación)

  int a = 5, b = 6;
  printf("Valor  a: %d\n", a);
  printf("Valor  b: %d\n", b);

  // Operador igualdad
  bool c = a == b;
  printf("a igual que b? %d\n", c);
  // Operador distinto
  c = a != b;
  printf("a distinto que b? %d\n", c);
  // Operador mayor que
  c = a > b;
  printf("a mayor que b? %d\n", c);
  // Operador mayor que
  c = a > b;
  printf("a mayor que b? %d\n", c);
  // Operador mayor o igual que
  c = a >= b;
  printf("a mayor o igual que b? %d\n", c);
  // Operador menor que
  c = a < b;
  printf("a menor que b? %d\n", c);
  // Operador menor o igual que
  c = a <= b;
  printf("a menor o igual que b? %d\n", c);

  return 0;
}