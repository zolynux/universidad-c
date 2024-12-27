# Universidad C - Aprender El Lenguaje C desde cero

[!lenguaje-c](./lenguaje-c.png)
# Tabla de Contenido
- [Universidad C - Aprender El Lenguaje C desde cero](#universidad-c---aprender-el-lenguaje-c-desde-cero)
- [Tabla de Contenido](#tabla-de-contenido)
  - [Introducción al lenguaje C](#introducción-al-lenguaje-c)
  - [Variables](#variables)
  - [Tipos de datos](#tipos-de-datos)
  - [Operadores](#operadores)
  - [Decisiones](#decisiones)
  - [Ciclos](#ciclos)
  - [Arreglos](#arreglos)
  - [Matrices](#matrices)
  - [Funciones](#funciones)
  - [Funciones Incorporadas al lenguaje C](#funciones-incorporadas-al-lenguaje-c)

## Introducción al lenguaje C

- Lenguaje de Prooósito General
- Creado Por: **Dennis Ritchie**
- Es un Lenguaje Compilado
- Es multiplataforma
- Muchos lenguajes más modernos `extienden` del lenguaje C (C++, Java, C#, JavaScript)
  

**¿Qué es una función?**

Una función es un bloque de código que nos permite realizar alguna operación.

[!image](./funcion-c.JPG)

**Ejemplo:** Mandar a imprimir algo a consola.

**Hola Mundo con el lenguaje C**

```c
#inclue <stdio.h> // Libreria Standard Input/Output (Ej. función printf)

int main() {
  printf("Hola Mundo");
  return 0;
}
```

## Variables

**¿Qué es una variable?**

Una variable nos permite almacenar los datos de nuestros programas

**Se compone de varios elementos**

1. nombre
2. valor almacenado (tipo de dato)
3. Dirección de memoria

**Por ejemplo:**

```c
miVariable = 10;
```

---

**Tipos de Memoria (ROM y RAM)**

**ROM**

ROM = Read Only Memory (Memoria de Solo Lectura)

Los datos almacenados aquí no se pueden modificar.

**RAM**

RAM = Random Access Memory (Memoria de Acceso Aleatorio).

Esta memoria es de Lectura y Escritura. Por lo tanto, la usaremos para almacenar nuestros programas (Ej. **variables**)

---

**Cómo se almacena la información en la memoria RAM**

Ejemplo: Creamos una variables

```c
a = 10
b = 15
c = a // Se copia el valor
c = 20
```


|variables|Memoria RAM | Dirección memoria (referencia)|
|---|---|---|
|a|10|0x333|
|b|15|0x344|
|c| ~~10~~ 20 |0x355|

> [!NOTE]
> Sistemas de Numeración como Binario, Octal, Decimal o Hexadecimal
>
> Si desean pueden buscar más información en Internet como: **Sistemas de Numeración**
>
> `c = 20` Solo se modificar el valor de **c**. El valor de no sse ve afectado => *Copia por valor*
> `0x355 = 20`

---

**Visualización de la memoria**

```c
miVariable = 10; // int -> 4 bytes
```

![alt text](image.png)

---

**Tipos de datos en C**

| Tipos | Signifcado|EJemplos|
|--|--|--|
|int|Entero|10, -8, etc (4 bytes)|
|float|Real|3.5, -6.9, etc (4 bytes)|
|double|Real con más precisión que float|3e39 (8 bytes)|
|char|Caracter|`'A'` (1 byte)|
|bool|Lógico| `true` (1) o `false` (0) (1 byte)|

---

**Sintaxis Variables en C**

`[calificado] <tipo> <nombre> = <valor>;`

**Ejemplo:** `int miVariable = 10;`

```c
# include <stdio.h>

int main() {

  // 1. Declarar una variable
  int miNumero;
  // 2. La inicializamos
  miNumero = 10;
  // 3. Imprimir variable
  // formato %d para imprimir un entero -> decimal o int
  printf("%d", miNumero);

  return 0;
}
```

---

**Modificación de variables en C**

```c
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
```

## Tipos de datos 
## Operadores 
## Decisiones
## Ciclos
## Arreglos
## Matrices
## Funciones
## Funciones Incorporadas al lenguaje C
