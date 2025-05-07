//Ingresar los lados de un triángulo calcular su perímetro e imprimirlo

#include <stdio.h>

int main()
{
    float lado1, lado2, lado3, perimetro;

    printf("ingrese el primer lado del triangulo: ");
    scanf("%f", &lado1);

    printf("ingrese el segundo lado del triangulo: ");
    scanf ("%f", &lado2);

    printf("ingrese el tercer lado del triangulo: ");
    scanf("%f", &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("el perimetro del triangulo es: %f\n", perimetro);

    system("pause");

    return 0;
}