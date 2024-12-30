
#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Ejercicio Propuesto: Suma Acumulativa
  int suma = 0, numero = 1;

  // ciclo For
  for (numero; numero <= 5; numero++)
  {
    printf("acumulador + numero: %d + %d\n", suma, numero);
    suma += numero;
    (numero < 5) ? printf("Suma parcial acumulada: %d\n", suma) : printf("Finaliza la suma acumulad: %d\n", suma);
  }
  printf("Fin de bloque de ciclo\n");

  return 0;
}