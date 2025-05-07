//Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo

#include <stdio.h>

int main()
{
    float numero;

    printf("Ingrese un número: ");
    scanf("%f", &numero);


    if (numero > 0) {
        printf("\nEl número es positivo.\n");
    } else if (numero < 0) {
        printf("\nEl número es negativo.\n");
    } else {
        printf("\nEl número es nulo (cero).\n");
    }

    system("pause");

    return 0;
}