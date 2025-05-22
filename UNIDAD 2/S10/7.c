//Diseñe un algoritmo que sume los 20 primeros números impares.

#include <stdio.h>

int main() {
    int suma = 0;
    int i;

    for (i = 0; i < 20; i++) {
        suma += 2 * i + 1;  // Fórmula para el i-ésimo número impar
    }

    printf("La suma de los 20 primeros números impares es: %d\n", suma);

    return 0;
}
