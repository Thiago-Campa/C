//Crea una función llamada esPar que reciba un número entero como parámetro y
//devuelva 1 si el número es par, o 0 si es impar. Después, crea un programa que
//utilice esta función y muestre los mensajes en consola “El número ingresado es
//par” o “El número ingresado es impar”, según el valor retornado. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void esPar(int n)
{
    if(n %2 == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}

void mensaje(int n)
{
    if(n %2 == 0)
    {
        printf(" el numero %d es par", n);
    }
    else
    {
        printf("el numero %d es impar", n);
    }
}

int main(void)
{
    int n;

    printf("ingrese el numero: ");
    scanf("%d", &n);

    esPar(n);

    printf("\n");

    mensaje(n);

    printf("\n");

    system("pause");
    return 0;
}