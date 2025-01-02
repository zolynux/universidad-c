#include <stdio.h>

// 1. Definir el procedimiento
void imprimir(int parametro)
{
  printf("El valor recibido es: %d\n", parametro);
}

int main()
{
  // Definimos el argumento
  int argumento;
  printf("Proporciona una numero: ");
  scanf("%d", &argumento);

  // 2. Llamamos al procedimiento
  imprimir(argumento);
  imprimir(100);
  imprimir(200);

  return 0;
}