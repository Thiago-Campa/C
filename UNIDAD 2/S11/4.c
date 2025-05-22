//Dado el vector {10, 20, 5, 15, 30, 20}, realizar lo siguiente:
//a. Informar el vector de la forma: "Índice: X, Valor: Y".
//b. Calcular e informar el total del vector.
//c. Mostrar los valores que se encuentran en posiciones impares.
//d. Mostrar las posiciones (índices) que contienen números impares.
//e. Informar el mayor número del vector.
//f. Informar cuántas veces aparece el número 20.

#include <stdio.h>

int main() {
    int vector[6] = {10, 20, 5, 15, 30, 20};
    int total = 0;
    int mayor = vector[0];
    int contador20 = 0;

    // a. Informar índice y valor
    printf("a. Índice y Valor:\n");
    for (int i = 0; i < 6; i++) {
        printf("Índice: %d, Valor: %d\n", i, vector[i]);
    }

    // b. Calcular total
    for (int i = 0; i < 6; i++) {
        total += vector[i];
    }
    printf("\nb. Total del vector: %d\n", total);

    // c. Mostrar valores en posiciones impares
    printf("\nc. Valores en posiciones impares:\n");
    for (int i = 1; i < 6; i += 2) {
        printf("Posición %d -> %d\n", i, vector[i]);
    }

    // d. Mostrar índices con números impares
    printf("\nd. Posiciones que contienen números impares:\n");
    for (int i = 0; i < 6; i++) {
        if (vector[i] % 2 != 0) {
            printf("Índice: %d\n", i);
        }
    }

    // e. Informar el mayor número
    for (int i = 1; i < 6; i++) {
        if (vector[i] > mayor) {
            mayor = vector[i];
        }
    }
    printf("\ne. El mayor número del vector es: %d\n", mayor);

    // f. Contar cuántas veces aparece el 20
    for (int i = 0; i < 6; i++) {
        if (vector[i] == 20) {
            contador20++;
        }
    }
    printf("\nf. El número 20 aparece %d vez%s.\n", contador20, (contador20 == 1) ? "" : "es");

    return 0;
}
