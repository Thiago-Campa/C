//Crear una función llamada calcularAreaCuadrado que reciba el lado de un
//cuadrado como parámetro y devuelva el área de ese cuadrado. Luego,
//desarrollar un programa que invoque a esta función y muestre el resultado.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularCuadrado(float lado)
{
    return lado * lado;
}

int main(void)
{
    float lado, area;

    printf("ingrese el lado del cuadrado: ");
    scanf("%f", &lado);

    area = calcularCuadrado(lado);

    printf("el area del cuadrado es: %.2f\n", area);

    system("pause");
    return 0;
}
