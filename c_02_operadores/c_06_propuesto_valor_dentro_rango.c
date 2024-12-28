#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Ejericio Valor Dentro de Rango
  // Definimos las variables
  int minimo = 0, maximo = 5;
  // Solicitamos un valor entre 0 y 5
  int datos;
  printf("Proporciona un dato entre 0 y 5: ");
  scanf("%d", &datos);

  // Verificamos si estamos dentro de rango
  bool dentroRango = datos >= minimo && datos <= maximo;
  printf("Valor dentro de rango?: %d\n", dentroRango);

  return 0;
}