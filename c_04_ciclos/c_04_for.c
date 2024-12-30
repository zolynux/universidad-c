#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Ciclo for
  // Imprimir 1...5
  const int REPETICIONES = 5;
  for (int contador = 1; contador <= REPETICIONES; contador++)
  {
    printf("%d\n", contador);
  }

  return 0;
}