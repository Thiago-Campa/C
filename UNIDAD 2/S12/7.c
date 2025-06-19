//7. Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es
//un número primo, o 0 en caso contrario.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int esPrimo(int numero, int i)
{
    if (numero < 1)
    {
        printf("0");
    }
    if(numero %2 == 0)
    {
        printf("0");
    }
    if(int i=3; i*i<=numero; i = i+2)
    {

    }


}

int main(void)
{
    int n, resultado;
    printf("ingrese un numero: ");
    scanf("%d", &n);

    resultado = esPrimo(n);

    printf("el resultado es: %d", resultado);

    system("pause");
    return 0;

}
