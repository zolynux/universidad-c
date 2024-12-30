
#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Ejercicio Propuesto: Suma Acumulativa
  int sumaAcumulada = 0, numero = 1;
  /*
    // While
    while (numero <= 5)
    {
      // Imprimimos lo que va a sumar (no altera el resultado de la suma)
      printf("acumulador + numero: %d + %d\n", sumaAcumulada, numero);
      // sumaAcumulada = sumaAcumulada + numero;
      sumaAcumulada += numero;
      // Imprimimos el resultado parcial y final de suma con condición
      (numero < 5) ? printf("Suma parcial acumulada: %d\n", sumaAcumulada) : printf("Finaliza la suma acumulativa total es: %d\n", sumaAcumulada);
      // Incrementamos la variable de numero
      numero++;
    }
   */
  // Do while
  do
  {
    // Imprimimos lo que va a sumar (no altera el resultado de la suma)
    printf("acumulador + numero: %d + %d\n", sumaAcumulada, numero);
    // sumaAcumulada = sumaAcumulada + numero;
    sumaAcumulada += numero;
    // Imprimimos el resultado parcial y final de suma con condición
    (numero < 5) ? printf("Suma parcial acumulada: %d\n", sumaAcumulada) : printf("Finaliza la suma acumulativa total es: %d\n", sumaAcumulada);
    // Incrementamos la variable de numero
    numero++;
  } while (numero <= 5);

  printf("Fin de bloque de ciclo\n");

  return 0;
}