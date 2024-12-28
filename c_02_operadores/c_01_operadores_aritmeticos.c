#include <stdio.h>

int main()
{
  // Operadores Aritmeticos
  int a, b, c, e, f;
  float d;

  // Suma +
  a = 3 + 4;
  printf("Suma: %d\n", a);

  // Resta -
  b = 6 - 2;
  printf("Resta: %d\n", b);

  // Multiplicacion *
  c = a * 2;
  printf("Multiplicacion: %d\n", c);

  // Division /
  d = b / 2.5;
  printf("Division: %.2f\n", d);

  f = 9 % 2;
  printf("Residuo division: %d\n", f);

  return 0;
}