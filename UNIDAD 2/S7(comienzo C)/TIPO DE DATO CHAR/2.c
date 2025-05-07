//Pedir al usuario que ingrese dos caracteres y luego imprimir la suma de sus
//códigos ASCII.

#include <stdio.h>

int main()
{
    char char1, char2;
    int suma;

    printf("Ingrese el primer carácter: ");
    scanf(" %c", &char1);  // el espacio antes de %c evita leer un enter anterior

    printf("Ingrese el segundo carácter: ");
    scanf(" %c", &char2);

    suma = char1 + char2;

    printf("\nLa suma de los códigos ASCII de '%c' y '%c' es: %d\n", char1, char2, suma);
    
    system("pause");

    return 0;
}
