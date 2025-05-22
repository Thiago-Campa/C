//Declarar un array de tipo entero de 5 elementos, asignarles un valor y mostrar la
//información de la siguiente forma: “Índice: X, Valor: Y”
//Mostrar los datos en el orden ingresado y en orden inverso.

#include <stdio.h>

int main() {
    int numeros[5];

    // Ingreso de valores
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el valor para el índice %d: ", i);
        scanf("%d", &numeros[i]);
    }

    // Mostrar en orden ingresado
    printf("\n--- Datos en orden ingresado ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Índice: %d, Valor: %d\n", i, numeros[i]);
    }

    // Mostrar en orden inverso
    printf("\n--- Datos en orden inverso ---\n");
    for (int i = 4; i >= 0; i--) {
        printf("Índice: %d, Valor: %d\n", i, numeros[i]);
    }

    return 0;
}

