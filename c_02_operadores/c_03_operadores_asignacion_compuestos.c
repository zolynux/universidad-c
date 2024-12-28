#include <stdio.h>

int main()
{
  // Operadores de Asignacion
  // Operador = para asignar un valor
  int miNumero = 10;
  printf("Valor miNumero: %d\n", miNumero);
  // Modificar el valor de una variable
  miNumero = 20;
  printf("Valor miNumero: %d\n", miNumero);
  // Operador +=
  miNumero += 5; // miNumero = miNumero + 5;
  printf("Valor miNumero: %d\n", miNumero);
  // Operadores -=
  miNumero -= 3; // miNumero = miNumero - 3;
  printf("Valor miNumero: %d\n", miNumero);
  // Operadores *=
  miNumero *= 2; // miNumero = miNumero * 2;
  printf("Valor miNumero: %d\n", miNumero);
  // Operadores /=
  miNumero /= 7; // miNumero = miNumero / 7;
  printf("Valor miNumero: %d\n", miNumero);
  // Operadores %= (modulo o residuo division)
  miNumero %= 2; // miNumero = miNumero % 2;
  printf("Valor miNumero: %d\n", miNumero);

  return 0;
}