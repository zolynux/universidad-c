#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Convertir de texto a numero
  char cadena1[] = "10";
  char cadena2[] = "20";
  // atoi -> Ascci to int
  // atof -> Ascci to float
  // Si no es numero -> 0
  int resultado = atoi(cadena1) + atoi(cadena2);
  printf("Resultado suma: %d", resultado);

  return 0;
}
