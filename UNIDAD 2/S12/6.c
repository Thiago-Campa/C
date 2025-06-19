//Crear una función que devuelva la primera letra de una cadena de texto.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char primerLetra(char cadena[])
{
    return cadena[0];
}

int main(void)
{
    char texto[100];

    printf("ingrese la oracion: ");
    fgets(texto, sizeof(texto), stdin);

    char letra = primerLetra(texto);

    printf("la primer letra de %c es: %c\n", texto, letra);

    system("pause");
    return 0;
}