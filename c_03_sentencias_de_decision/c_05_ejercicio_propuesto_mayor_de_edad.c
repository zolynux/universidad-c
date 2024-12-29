#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Algoritmo Mayor Edad
  printf("Proporciona tu edad: ");
  int edad;
  scanf("%d", &edad);

  // Revisamos si la edad es mayor de edad
  if (edad >= 18)
  {
    printf("La persona con edad %d es un mayor de edad\n");
  }
  else if (edad > 0 && edad < 18)
  {
    printf("La persona con edad %d es un menor");
  }
  else
  {
    printf("Proporcionado es inválido");
  }

  return 0;
}