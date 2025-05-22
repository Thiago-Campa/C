//Declarar un array de tipo entero de 5 componentes, ingresar los valores por
//consola y mostrar cuántas veces se repite el número 5.

#include <stdio.h>

int main() {
    int numeros[5];
    int contador = 0;

    // Ingreso de valores
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Contar cuántas veces aparece el número 5
    for (int i = 0; i < 5; i++) {
        if (numeros[i] == 5) {
            contador++;
        }
    }

    // Mostrar resultado
    printf("\nEl número 5 se repite %d vez%s.\n", contador, (contador == 1) ? "" : "es");

    return 0;
}
