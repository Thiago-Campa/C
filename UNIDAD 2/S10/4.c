//Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.

#include <stdio.h>

int main() {
    int i, suma = 0;

    for (i = 1; i <= 10; i++) {
        if (i % 2 != 0) {  // si el número es impar
            suma += i;
        }
    }

    printf("La suma de los números impares entre 1 y 10 es: %d\n", suma);

    return 0;
}
