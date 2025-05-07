//Escriba un programa que pida ingresar un número y a continuación escriba en
//la consola si el mismo es par o impar.

#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("\nEl número %d es par.\n", numero);
    } else {
        printf("\nEl número %d es impar.\n", numero);
    }

    system("pause");

    return 0;
}