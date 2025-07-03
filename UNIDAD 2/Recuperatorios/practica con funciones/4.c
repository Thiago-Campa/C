//Ingresar los sueldos (floats) de 20 empleados.
//Validar que sean mayores a 0 y menores o iguales a 1.000.000.
//Mostrar:

//a) Sueldo más alto
//b) Número del empleado con mayor sueldo
//c) Promedio de sueldos

#include <stdio.h>
#include <stdlib.h>

void mostrarSueldoMayorYEmpleado(float operarios[], int cantidad)
{
    float mayor = operarios[0];
    float operario = 0;

    for(int i=0; i<cantidad; i++)
    {
        if(operarios[i] > mayor)
        {
            mayor = operarios[i];
            operario = i;
        }
    }

    printf("mayor sueldo: %f", mayor);
    printf("empleado con mayor sueldo: %d", operario + 1);
}

void mostrarPromedio(float operarios[], int cantidad)
{
    float suma = 0, promedio;

    for(int i=0; i<cantidad; i++)
    {
        suma = suma + operarios[i];
    }

    promedio = suma / cantidad;

    printf("el promedio es: %.2f\n", promedio);
}

int main(void)
{
    float empleados[20];
    float sueldo;
    int i;

    for(i=0; i<20; i++)
    {
        do
        {
            printf("ingrese el sueldo del empleado %d: ", i+1);
            scanf("%f", &sueldo);
        } while (sueldo <= 0 || sueldo > 1000000);
        
        if(sueldo > 0 && sueldo <= 1000000)
        {
            empleados[i] = sueldo;
        }
    }

    mostrarSueldoMayorYEmpleado(empleados, 25);
    mostrarPromedio(empleados, 25);

    system("pause");
    return 0;
}