//Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.

#include <stdio.h>

int main() {
    float nota, suma = 0;
    int cantidad = 0;
    char continuar;

    do {
        printf("Ingrese una nota: ");
        scanf("%f", &nota);

        suma += nota;
        cantidad++;

        printf("¿Desea ingresar otra nota? (s/n): ");
        scanf(" %c", &continuar);  // espacio antes de %c para ignorar salto de línea anterior

    } while (continuar == 's' || continuar == 'S');

    if (cantidad > 0) {
        float promedio = suma / cantidad;
        printf("\nSuma total de notas: %.2f\n", suma);
        printf("Promedio: %.2f\n", promedio);
    } else {
        printf("\nNo se ingresaron notas.\n");
    }

    return 0;
}