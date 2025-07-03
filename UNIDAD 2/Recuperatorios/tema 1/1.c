// Escribir un codigo C del siguiente enunciado
//(usar dos funciones, una para los items a y b y otro para el item c)
//     Almacenar las notas(reales) de 10 estudiantes en un arreglo. Calcular y mostrar:
//     a. mayor nota
//     b. numero del estudiante al cual corresponde la mayor nota.
//     c. promedio de notas

// validar que la nota sea mayor a 0 y menor o igual a 10.

#include <stdio.h>
#include <stdlib.h>

void mostrarMayorNotaYAlumno(float alumnos[],float cantidad)
{
    float mayor = alumnos[0];
    float estudiante = 0;

    for(int i=0; i<cantidad; i++)
    {
        if(alumnos[i] > mayor)
        {
            mayor = alumnos[i];
            estudiante = i;
        }
    }

    printf("la mayor nota fue: %f", mayor);
    printf("corresponde a: %f", estudiante + 1);
}

void mostrarPromedio(float alumnos[], int cantidad)
{
    float suma = 0, promedio;

    for(int i=0; i<cantidad; i++)
    {
        suma = suma + alumnos[i];
    }

    promedio = suma / cantidad;

    printf("el promedio es: %.2f\n", promedio);
}

int main(void)
{
    float estudiantes[10];
    float nota; 
    int i;

    for(i=0; i<10; i++)
    {
        do
        {
            printf("ingrese la nota del alumno %d: ", i+1);
            scanf("%f", nota);
        } while (nota <0 || nota > 10);

        if(nota >= 0 && nota <= 10)
        {
            estudiantes[i] = nota;
        }
    }

    mostrarMayorNotaYAlumno(estudiantes, 10);
    mostrarPromedio(estudiantes, 10);

    system("pause");
    return 0;
}




