//El usuario debe poder ingresar los lados de un rectángulo y el programa
//calcula con esos datos la diagonal principal del rectángulo, superficie y
//perímetro. Mostrar al usuario los resultados.

#include <stdio.h>

int main()
{
    float base, altura, diagonal, superficie, perimetro;
    float cuadrado, aprox, mejorAprox;

    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);

    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);

    cuadrado = base * base + altura * altura;

    // Aproximación manual para calcular la raíz cuadrada (diagonal)
    aprox = cuadrado / 2;

    // Paso 1
    mejorAprox = (aprox + cuadrado / aprox) / 2;
    aprox = mejorAprox;

    // Paso 2
    mejorAprox = (aprox + cuadrado / aprox) / 2;
    aprox = mejorAprox;

    // Paso 3
    mejorAprox = (aprox + cuadrado / aprox) / 2;
    aprox = mejorAprox;

    diagonal = mejorAprox;

    superficie = base * altura;
    perimetro = 2 * (base + altura);

    printf("\nDiagonal: %.2f\n", diagonal);
    printf("Superficie: %.2f\n", superficie);
    printf("Perímetro: %.2f\n", perimetro);

    system("pause");

    return 0;
}