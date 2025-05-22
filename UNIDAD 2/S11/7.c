//Declarar un array de tipo float. El usuario debe ingresar la cantidad de notas a
//cargar. Leer las notas por consola, luego mostrar la suma total y el promedio.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int cantidad;
    float *notas; // puntero para array dinámico
    float suma = 0, promedio;

    // Solicitar cantidad de notas
    printf("Ingrese la cantidad de notas a cargar: ");
    scanf("%d", &cantidad);

    // Validar cantidad positiva
    if (cantidad <= 0) {
        printf("La cantidad debe ser mayor que 0.\n");
        return 1;
    }

    // Reservar memoria para el array
    notas = (float *)malloc(cantidad * sizeof(float));
    if (notas == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Leer notas
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese la nota %d: ", i + 1);
        scanf("%f", &notas[i]);

        // Validar nota positiva
        while (notas[i] < 0) {
            printf("Nota inválida. Ingrese una nota positiva: ");
            scanf("%f", &notas[i]);
        }

        suma += notas[i];
    }

    promedio = suma / cantidad;

    // Mostrar resultados
    printf("\nSuma total de notas: %.2f\n", suma);
    printf("Promedio de notas: %.2f\n", promedio);

    // Liberar memoria
    free(notas);

    return 0;
}
