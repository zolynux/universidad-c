
#include <stdio.h>
#include <stdbool.h>

int main()
{
  const int REPETICIONES = 10;
  // Incremento
  printf("Incrementos de 3 en 3 (Tope 10):\n");
  for (int i = 1; i <= 10; i += 3)
  {
    printf("%d ", i);
  }
  printf("\nDecrementos de 3 en 3 (Tope -10):\n");

  for (int j = 1; j >= -10; j -= 3)
  {
    printf("%d ", j);
  }

  return 0;
}