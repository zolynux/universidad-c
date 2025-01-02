#include <stdio.h>
#include <math.h>

int main()
{
  // Redondeo y truncado
  float numero;
  int redondeo, truncado;

  // Redondeo
  numero = 8.5;
  // round -> .5 redondea al entero mayor mas cercano
  redondeo = round(numero);
  printf("\nValor %.2f redondeado = %d", numero, redondeo);

  // truncado
  truncado = trunc(numero);
  printf("\nValor %.2f truncado = %d", numero, truncado);
  return 0;
}
