#include <stdio.h>
#include <string.h>

int main()
{
  // Definir cadena
  char cadena[] = "Hola";
  // Obtenemos el largo de una cadena
  int largo = strlen(cadena);

  printf("Cadena orignal: %s\n", cadena);
  printf("Largo cadena: %d\n", largo);
  largo = sizeof(cadena);
  printf("Largo cadena (sizeof): %d\n", largo);

  // Recorrer la cadena
  char c;
  for (int i = 0; i < strlen(cadena); i++)
  {
    c = cadena[i];
    printf("\n%c", c);
  }

  return 0;
}
