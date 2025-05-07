//Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >=
//100000 y un 10% si es menor. Validar que la venta sea mayor que 0, caso
//contrario informar dicha situación.

#include <stdio.h>

int main()
{
    float venta, descuento, valorFinal;

    printf("Ingrese el valor de la venta: ");
    scanf("%f", &venta);

    if (venta <= 0) {
        printf("\nValor de la venta inválido. Debe ser mayor que 0.\n");
    } else {
        if (venta >= 100000) {
            descuento = 0.15 * venta; 
        } else {
            descuento = 0.10 * venta;
        }

        valorFinal = venta - descuento;

        printf("\nValor original: %.2f\n", venta);
        printf("Descuento aplicado: %.2f\n", descuento);
        printf("Valor final después del descuento: %.2f\n", valorFinal);
    }

    system("pause");

    return 0;
}