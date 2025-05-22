//Al finalizar cada día, los vendedores de un comercio rinden al dueño sus
//ventas para calcular la comisión que cobrarán. Los vendedores son 5,
//codificados de la ‘A’ a la ‘E’, y no se sabe cuántas ventas realizó cada uno.
//Los datos vienen ordenados y agrupados por vendedor. Por cada vendedor
//se ingresan cada uno de los importes de sus ventas. 
//Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0.
//Se solicita mostrar para cada uno de los vendedores: su código, y la comisión
//que cobrará, que es el 2,5% de la suma de sus ventas.

#include <stdio.h>

int main() {
    char vendedor;
    float venta, sumaVentas;
    float comision;
    int i = 0;

    for (vendedor = 'A'; vendedor <= 'E'; vendedor++) {
        sumaVentas = 0;
        printf("\nIngresar ventas del vendedor %c (0 para terminar):\n", vendedor);

        do {
            printf("Venta: ");
            scanf("%f", &venta);

            if (venta < 0) {
                printf("Valor inválido, ingrese un valor positivo o 0 para terminar.\n");
            } else if (venta > 0) {
                sumaVentas += venta;
            }
        } while (venta != 0);

        comision = sumaVentas * 0.025;
        printf("Vendedor %c - Comisión: $%.2f\n", vendedor, comision);
    }

    return 0;
}