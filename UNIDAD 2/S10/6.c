//Suma de los 10 primeros números múltiplos de tres.

#include <stdio.h>

int main() {
    int i, suma = 0;

    for (i = 1; i <= 10; i++) {
        suma += 3 * i;  // múltiplo de 3
    }

    printf("La suma de los primeros 10 múltiplos de 3 es: %d\n", suma);

    return 0;
}
