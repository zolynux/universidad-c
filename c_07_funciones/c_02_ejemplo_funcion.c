#include <stdio.h>

// 1. Definir una funcion
int sumar(int a, int b)
{
  int resultadoSuma = a + b;
  return resultadoSuma;
}

int main()
{
  // 2. Llamamos la función
  int argA, argB, resultado;
  printf("Proporciona el primer argumento: ");
  scanf("%d", &argA);
  printf("\nProporciona el segundo argumento: ");
  scanf("%d", &argB);

  resultado = sumar(argA, argB);
  printf("Resultado de la suma: %d", resultado);

  return 0;
}