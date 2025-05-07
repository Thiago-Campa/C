//Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos
//el 2do valor ingresado, imprimir los resultados

#include <stdio.h>

int main()

{
    float valor1, valor2, suma, producto, resta;

    printf("Ingrese el primer valor: ");
    scanf("%f", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%f", &valor2);

    suma = valor1 + valor2;
    producto = valor1 * valor2;
    resta = valor1 - valor2;
    
    printf("\nResultados:\n");
    printf("Suma: %.2f\n", suma);
    printf("Producto: %.2f\n", producto);
    printf("Resta (1ro - 2do): %.2f\n", resta);

    system("pause");

    return 0;
}

