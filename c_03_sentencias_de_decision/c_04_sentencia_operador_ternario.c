#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Sentencia IF
  // Verificamos si el numero proporcionado es positivo
  printf("Proporciona un numero: ");
  int miNumero;
  scanf("%d", &miNumero);

  // Verificamos si el numero es positivo, cero o negativo
  // Operador Ternario
  (miNumero > 0) ? printf("Positivo") : printf("Cero o Negativo");

  return 0;
}