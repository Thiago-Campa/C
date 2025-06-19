//Crear una función que calcule el cubo de un número real (float). 
//El resultado deberá ser otro número real.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularCubo(float n)
{
    return n * n * n;
}

int main(void)
{
    float n, cubo;

    printf("ingrese el numero: ");
    scanf("%f", &n);
    
    cubo = calcularCubo(n);

    printf("el cubo del numero %f es: %.2f\n", n, cubo);

    system("pause");
    return 0;
}