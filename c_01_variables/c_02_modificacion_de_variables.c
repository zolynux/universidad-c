# include <stdio.h>

int main() {

  // 1. Declarar una variable
  int miNumero; // Tiene un valor basura
  printf("%d", miNumero);
  // 2. La inicializamos
  miNumero = 10;
  // 3. Imprimir variable
  // formato %d para imprimir un entero -> decimal o int
  // caracter especial \n para salto de línea
  printf("\n%d", miNumero);
  // 4. Modificamos el valor de la variable
  miNumero = 20; // Se sobreescribe el valor 10
  printf("\n%d", miNumero);

  return 0;
}