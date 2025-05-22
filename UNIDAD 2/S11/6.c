//Ingrese por teclado la facturación de los últimos 6 meses del año. Informar:
//a. La facturación total
//b. El promedio de facturación
//c. La facturación máxima
//d. La facturación mínima

#include <stdio.h>

int main() {
    float facturacion[6];
    float total = 0, promedio;
    float max, min;

    // Ingreso de datos
    for (int i = 0; i < 6; i++) {
        printf("Ingrese la facturación del mes %d: ", i + 1);
        scanf("%f", &facturacion[i]);

        // Validar que sea un valor positivo
        while (facturacion[i] < 0) {
            printf("Valor inválido. Ingrese un número positivo: ");
            scanf("%f", &facturacion[i]);
        }

        total += facturacion[i];

        // Inicializar max y min con el primer valor ingresado
        if (i == 0) {
            max = facturacion[i];
            min = facturacion[i];
        } else {
            if (facturacion[i] > max) max = facturacion[i];
            if (facturacion[i] < min) min = facturacion[i];
        }
    }

    promedio = total / 6;

    // Resultados
    printf("\n--- Resultados ---\n");
    printf("a. Facturación total: %.2f\n", total);
    printf("b. Promedio de facturación: %.2f\n", promedio);
    printf("c. Facturación máxima: %.2f\n", max);
    printf("d. Facturación mínima: %.2f\n", min);

    return 0;
}
