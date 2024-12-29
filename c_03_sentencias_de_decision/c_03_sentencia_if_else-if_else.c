#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Sentencia IF
  // Verificamos si el numero proporcionado es positivo
  printf("Proporciona un numero: ");
  int miNumero;
  scanf("%d", &miNumero);

  // Verificamos si el numero es positivo
  if (miNumero > 0)
  {
    printf("Valor positivo: %d\n", miNumero);
  }
  else if (miNumero < 0)
  {
    printf("Valor Negativo: %d\n", miNumero);
  }
  else
  {
    printf("Valor Cero: %d\n", miNumero);
  }

  return 0;
}