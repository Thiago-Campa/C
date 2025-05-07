//Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la
//hipotenusa, el perímetro, la superficie. Imprima los resultados de las
//operaciones solicitadas

#include <stdio.h>

int main()
{
    float lado1, lado2, hipotenusa, perimetro, superficie;
    float cuadrado, aprox, mejorAprox;

    printf("Ingrese el primer lado del triángulo rectángulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el segundo lado del triángulo rectángulo: ");
    scanf("%f", &lado2);

    cuadrado = lado1 * lado1 + lado2 * lado2;

    // Primer intento de raíz cuadrada (método de aproximación manual)
    aprox = cuadrado / 2;

    // Primer paso de mejora
    mejorAprox = (aprox + cuadrado / aprox) / 2;
    aprox = mejorAprox;

    // Segundo paso
    mejorAprox = (aprox + cuadrado / aprox) / 2;
    aprox = mejorAprox;

    // Tercer paso
    mejorAprox = (aprox + cuadrado / aprox) / 2;
    aprox = mejorAprox;

    // Resultado final de hipotenusa (aproximada)
    hipotenusa = mejorAprox;


    perimetro = lado1 + lado2 + hipotenusa;
    superficie = (lado1 * lado2) / 2;

    printf("\nHipotenusa: %.2f\n", hipotenusa);
    printf("Perímetro: %.2f\n", perimetro);
    printf("Superficie: %.2f\n", superficie);

    system("pause");

    return 0;
}