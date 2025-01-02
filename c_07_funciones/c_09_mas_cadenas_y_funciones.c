#include <stdio.h>

// void imprimirMensaje(char *mensaje)
void imprimirMensaje(char mensaje[])
{
  // Imprimimos el mensaje
  mensaje = "Adios";
  printf("Mensaje: %s", mensaje);
  // mensaje[0] = 'h';
}

int main()
{
  // Definir la cadena
  // char cadena[5];
  char *cadena = "Hola";
  imprimirMensaje(cadena);
  printf("\nCadena original: %s", cadena);

  return 0;
}