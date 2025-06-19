//Crear una función llamada “signo”, que reciba un número real y devuelva un número 
//entero con el valor: -1 si el número es negativo, 1 si es positivo, o 0 si es cero. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int signo(float n)
{
    int numeroEntero = (int)n;

    printf ("el numero es: %d\n", numeroEntero);

    if(numeroEntero > 0)
    {
        printf("1");
    }
    else if(numeroEntero < 0)
    {
        printf("-1");
    }
    else
    {
        printf("0");
    }
}

int main(void)
{
    float n;

    printf("ingrese un numero real para convertirlo a entero: ");
    scanf("%f", &n);

    signo(n);

    printf("\n");

    system("pause");
    return 0;
}