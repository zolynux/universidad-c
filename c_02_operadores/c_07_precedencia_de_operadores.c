#include <stdio.h>
#include <stdbool.h>

int main() {
	// Precedencia de Operadores en C
	// 1. Parentesis y Corchetes
	// 2. Operadores unarios, como -, ++, --, !
	// 3. Aritmeticos *, / y %
	// 4. Aritmeticos + y -
	// 5. Relacionales <, <=, > y >=
	// 6. Igualdad/distinto == y !=
	// 7. Logicos && y ||
	// 8. Asignacion =, +=, -=, *=, etc.
	
	// Ejemplo: Se revisa de izquierda a derecha
	// int a = 12 / (3 + 2) * 3 - 1;
	int a = 12 / 3 + 2 * 3 - 1;
	printf("Resultado: %d", a);
	
	return 0;
}