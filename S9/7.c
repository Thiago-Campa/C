//Ingresar un conjunto de números reales distintos de cero. Para finalizar la
//entrada de datos, ingresar un cero. Determinar e informar la cantidad de
//números que lo forman.

#include <stdio.h>

int main() {
    float numero;
    int contador = 0;

    printf("Ingrese números reales distintos de cero (ingrese 0 para finalizar):\n");

    do {
        printf("Número: ");
        scanf("%f", &numero);

        if (numero != 0) {
            contador++;
        }
    } while (numero != 0);

    printf("Cantidad de números ingresados: %d\n", contador);

    return 0;
}