#include <stdio.h>
#include <string.h>

int main()
{
  // Subcadenas en C
  char cadena[] = "Hola Mundo";
  char subcadena[10];

  // strncpy - string copy
  // char* strncpy(destino, cadenaOriginal, numeroCaracteres);
  int inicio = 0, nCaracteres = 4;
  strncpy(subcadena, &cadena[inicio], nCaracteres);
  subcadena[nCaracteres] = '\0';
  printf("Cadena Original: %s", cadena);
  printf("\nSubCadena: %s", subcadena);

  return 0;
}
