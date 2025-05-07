//Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular
//su sueldo e imprimirlo.

#include <stdio.h>

int main()
{
    float valorHora, horasTrabajadas, sueldo;

    printf("Ingrese el valor de la hora: ");
    scanf("%f", &valorHora);

    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%f", &horasTrabajadas);

    sueldo = valorHora * horasTrabajadas;

    printf("\nEl sueldo del comerciante es: %.2f\n", sueldo);

    system("pause");

    return 0;
}