#include <stdio.h>

// void imprimirMensaje(char *mensaje)
void imprimirMensaje(char mensaje[])
{
  // Imprimimos el mensaje
  printf("Mensaje: %s", mensaje);
}

int main()
{
  // Definir la cadena
  char cadena[5];
  printf("Proporciona el mensaje a mostrar: \n");
  fgets(cadena, 5, stdin);
  imprimirMensaje(cadena);
  getchar();

  return 0;
}