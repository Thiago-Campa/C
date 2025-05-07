//Pedir al usuario que ingrese un carácter en mayúscula y luego imprimir su
//equivalente en minúscula.

#include <stdio.h>

int main()
{
    char mayuscula, minuscula;

    printf("Ingrese una letra en mayúscula: ");
    scanf(" %c", &mayuscula); 

    // Convertir a minúscula sumando 32 (regla del código ASCII)
    minuscula = mayuscula + 32;

    printf("La letra '%c' en minúscula es: '%c'\n", mayuscula, minuscula);

    system("pause");

    return 0;
}