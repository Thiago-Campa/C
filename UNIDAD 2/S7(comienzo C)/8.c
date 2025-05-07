//Ingresar el tiempo trabajado por un contador y considerando que el valor de
//la hora es de 800 pesos, calcular su sueldo e imprimirlo

#include <stdio.h>

int main()
{
    float horasTrabajadas, sueldo;
    float valorHora = 800;

    printf("Ingrese la cantidad de horas trabajadas por el contador: ");
    scanf("%f", &horasTrabajadas);
    sueldo = valorHora * horasTrabajadas;

    printf("\nEl sueldo del contador es: %.2f pesos\n", sueldo);

    system("pause");

    return 0;
}