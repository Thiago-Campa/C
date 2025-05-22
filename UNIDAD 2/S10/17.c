//En un supermercado Toco, el cliente tiene un descuento del 10% si compra
//15 o más Productos y además el importe total supere los$149.999. Además
//si es miembro de TocoPlus tiene un 5% de descuento adicional.
//Por cada uno de los productos se ingresa precio. La cantidad de productos se
//supone conocida X y se ingresa por el usuario. Se desea conocer:
//● El importe total a abonar
//● La cantidad de productos.
//● El monto de descuento

#include <stdio.h>

int main() {
    int cantidadProductos, i;
    float precio, total = 0.0, descuento = 0.0, descuentoTocoPlus = 0.0;
    char esTocoPlus;

    printf("Ingrese la cantidad de productos: ");
    scanf("%d", &cantidadProductos);

    for (i = 0; i < cantidadProductos; i++) {
        printf("Ingrese el precio del producto %d: ", i + 1);
        scanf("%f", &precio);
        total += precio;
    }

    // Preguntar si es miembro TocoPlus
    printf("¿Es miembro de TocoPlus? (S/N): ");
    scanf(" %c", &esTocoPlus);

    // Aplicar descuento del 10% si cumple condiciones
    if (cantidadProductos >= 15 && total > 149999) {
        descuento = total * 0.10f;
    }

    // Si es miembro TocoPlus, aplicar descuento adicional del 5% sobre el total menos el primer descuento
    if (esTocoPlus == 'S' || esTocoPlus == 's') {
        descuentoTocoPlus = (total - descuento) * 0.05f;
    }

    float montoDescuentoTotal = descuento + descuentoTocoPlus;
    float importeFinal = total - montoDescuentoTotal;

    printf("\nCantidad de productos: %d\n", cantidadProductos);
    printf("Importe total sin descuento: $%.2f\n", total);
    printf("Monto total de descuento: $%.2f\n", montoDescuentoTotal);
    printf("Importe total a abonar: $%.2f\n", importeFinal);

    return 0;
}
