#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Dia de la semana (if-else)
  int diaSemana;
  printf("Proporciona el dia de la semana");
  scanf("%d", &diaSemana);

  // Revision dia de la semana - switch
  switch (diaSemana)
  {
  case 1:
    printf("Lunes\n");
    break;
  case 2:
    printf("Martes\n");
    break;
  case 3:
    printf("Miércoles\n");
    break;
  case 4:
    printf("Jueves\n");
    break;
  case 5:
    printf("Viernes\n");
    break;
  case 6:
    printf("Sábado\n");
    break;
  case 7:
    printf("Domingo\n");
    break;

  default:
    printf("Valor dia errores: %d\n", diaSemana);
    break;
  }

  return 0;
}
